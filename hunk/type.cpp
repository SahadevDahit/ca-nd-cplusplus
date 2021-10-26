#include<iostream>
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
using namespace std;
type(const char *p)
{
	int i=0;
	while(p[i]!='\0')
	{
	
	cout<< p[i]<<"\xDB";
	cout<<"\b";
	Sleep(150);
	i++;
}
}
int main()
{
	type("hello i 'm hunk killer i am stdying in dhangadhi engineering college or nast. what about you.it's just a simple demostration'");
	type("xxx");
	getch();
	return 0;
}
