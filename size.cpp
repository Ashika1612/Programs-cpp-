#include<iostream>
using namespace std
main()
{
	int a,b;
	b=sizeof(a);
	cout<<"SIZE OF INT: "<<b;
	
	char p,q;
	q=sizeof(p);
	cout<<"\nSIZE OF CHAR: "<<int(q);
	
	float x,y;
	y=sizeof(x);
	cout<<"\nSIZE OF CHAR: "<<y;
	
	double m,n;
	n=sizeof(m);
	cout<<"\nSIZE OF DOUBLE: "<<n;
}
