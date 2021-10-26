#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class base
{
	public:
		int hr,min, sec;
		void get()
		{
			cout<<"Enter hour and minute and seconds of base class:-";
			cin>>hr>>min>>sec;
		}
		
};
class derived:public base
{
	public:
		int hr1,min1,sec1,hr2,min2,sec2,r,r2;
		friend class hunk;
		void getd()
		{
	cout<<"Enter hour and minute and seconds of derived class:-";
			cin>>hr1>>min1>>sec1;	
	
	 sec2=(sec1+sec)%60;
	  r=(sec1+sec)/60;
	 min2=(min+min1+r)%60;
	  r2=(min+min1+r)/60;
	 hr2=hr+hr1+r2;
		}
		void disp()
		{
				cout<<"\n\n\n\n Addition of time between base time and derived time \n";
			cout<<"\n hour= "<<hr2<<endl<<" minutes = "<<min2<<endl<<" Second = "<<sec2;
		}
};
class hunk
{
	public:
		int h,m,s,h3,m3,s3,r4,r5;
			void geth()
		{
			cout<<"Enter hour and minute and seconds of frnd class :-";
			cin>>h>>m>>s;	
	}
		void add(derived &d)
		{
			s3=(d.sec-s)%60;
			 r4=(d.sec-s)/60;
			m3=(r4-m+d.min)%60;
			 r5=(r4-m+d.min)/60;
			h3=r5+d.hr-h;
			
		}
		void display()
		{
			cout<<"\n Substraction of time between base time and frnd class time \n\n\n";
			cout<<"\n hour= "<<h3<<endl<<" minutes = "<<m3<<endl<<" Second = "<<s3;
		
		}
};
int main()
{
	derived d;
	d.get();
	d.getd();
	hunk h;
	h.geth();
	h.add(d);
	h.display();
	d.disp();
	getch();
	return 0;
}
