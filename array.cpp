#include<iostream>
using namespace std;
int main()
{
	int *p;
	int a[5];
	p=a;
	cout<<"ENTER THE ELEMENTS: ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nTHE ELEMENTS ARE: \n";
	for(int i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
