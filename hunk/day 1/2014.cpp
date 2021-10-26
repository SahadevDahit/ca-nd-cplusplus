#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	public:
		int h,m,s;
		time(){}
		time(int hh, int mm ,int ss)
		{
			h=hh;
			m=mm;
			s=ss;
		}
		
		 operator +(time t)
		{
			int r1,r2;
			s=(s+t.s)%60;
			r1=(s+t.s)/60;
			m=(r1+m+t.m)%60;
			r2=(r1+m+t.m)/60;
			h=h+t.h+r2;
	
				cout<<"hour = "<<h<<endl<<"\n minutes = "<<m<<endl<<"\n second= "<<s;
		}
	//	void display()
	//	{
	
	//	}
};
int main()
{
	time t1(4,30,60),t2(3,45,70);
	time t3;
	t1+t2;
	getch();
	return 0;
	}
