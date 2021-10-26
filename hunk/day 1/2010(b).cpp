#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class staff
{
	public:
		char name[30];
		int id;
		
};
class lecturer:public staff
{
	public:
		char sub[30],deprt[30];
		lecturer(char n[30],int r,char subb[30],char dep[30])
		{
			strcpy(name,n);
			id=r;
			strcpy(sub,subb);
			strcpy(deprt,dep);
		}
		void display()
		{
			cout<<"information about lecturer\n\n ";
			cout<<"name= "<<name<<endl<<"Staff id= "<<id<<endl<<"subject= "<<sub<<endl<<"department = "<<deprt<<endl;
		}
};
class administrator:public staff
{
	public:
		char post[30],deprt[30];
			administrator(char n[30],int r,char po[30],char dep[30])
		{
			strcpy(name,n);
			id=r;
			strcpy(post,po);
			strcpy(deprt,dep);
		}
		void display()
		{
			cout<<"\n\n information about administrator \n\n ";
			cout<<"name= "<<name<<endl<<"Staff id= "<<id<<endl<<"post= "<<post<<endl<<"department = "<<deprt<<endl;
		}
};
int main()
{
	lecturer l("hunk",34,"computer","hod");
	l.display();
	administrator a("killer",34,"cheif","comp");
	a.display();
	getch();
	return 0;
}
