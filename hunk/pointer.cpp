#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *q=new int;
	*q=4;
	int i;
	for(i=0;i<*q;i++)
	{
		cout<<"\n Enter the "<<i+1<<" number:-";
		cin>>*(q+i);
	}
for(i=0;i<*q;i++)
	{
		cout<<"\nThe value of"<<i+1<<" number:-"<<*(q+i);
	}
	delete q;

	getch();
	return 0;
}

