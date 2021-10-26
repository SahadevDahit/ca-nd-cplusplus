#include<string>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<dos.h>
using namespace std;
int main()
{
	char name[50],add[100],ph[15];
	int roll;
	system("color 6E");
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(h,FOREGROUND_GREEN | BACKGROUND_RED);
cout<<"\n\t\t\t\tName:-";
fflush(stdin);
cin>>name;
cout<<"\n\t\t\t\tAddress:-";
fflush(stdin);
cin>>add;

cout<<"\n\t\t\t\tPhone NO:-";
fflush(stdin);
cin>>ph;

cout<<"\n\t\t\t\tROLL No-";
fflush(stdin);
cin>>roll;
cout<<"\n\t\t*********Your information***********";
fflush(stdin);
cout<<"\n\t\t\tName:-"<<name;
fflush(stdin);
cout<<"\n\t\t\tAddress:-"<<add;
fflush(stdin);
cout<<"\n\t\t\tPhone:-"<<ph;
fflush(stdin);
cout<<"\n\t\t\tRoll:-"<<roll;
cout<<"\n";
system("pause");
return 0;

	}
