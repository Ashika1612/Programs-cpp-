#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int age;
	cout<<"ENTER YOUR AGE: ";
	cin>>age;
	system("CLS");
	if(age<18)
	{
		cout<<"\nYOU ARE NOT ELIGIBLE TO VOTE!\n";
	}
	else
	{
		cout<<"\nYOU ARE ELIGIBLE TO VOTE!\n";
	}
	return 0;
}
