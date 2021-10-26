#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		float hr,min, sec;
		void get()
		{
			cout<<"Enter hour and minute and seconds :-";
			cin>>hr,min,sec;
		}
		
};
class derived:public base
{
	public:
		float hr1,min1,sec1;
	//	friend class hunk;
		void getd()
		{
			cout<<"Enter hour and minute and seconds :-";
			cin>>hr1,min1,sec1;	
		}
			
};
int main()
{
	derived d;
	d.get();
	d.getd();
	getch();
	return 0;
}
