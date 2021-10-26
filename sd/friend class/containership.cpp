#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class hunk
{
	public:
		char name[30],add[50];
		hunk(){}
		
		void getdata(char n[30],char a[50])
		{
		strcpy(name,n);
		strcpy(add,a);
							
		}
		void display()
		{
			cout<<"\n After concatenation :"<<strcat(name,add)<<endl;
		}
		
};
class killer:public hunk
{public:
	void run()
	{
		hunk h;
		h.getdata("hunk","killer");
		h.display();
	}
};
int main()
{
killer k;
k.run();
getch();
return 0;	
}
