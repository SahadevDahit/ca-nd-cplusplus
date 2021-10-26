#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class polar
{
	public:
		float x,y;
		polar(){}
polar(float a,float b)
	{
		x=a;
		y=b;
		}
	void display()
	{cout<<"rectangle in polar r="<<x<<" angle ="<<y;}
	};
class rectangle
{
	public:
		float x,y;
		rectangle(){}
		void getdata()
		{
			cout<<"enter value of x and y ";
			cin>>x>>y;
		}
		operator polar()
		{
			float b,c;
			b=sqrt(x*x+y*y);
			c=1/tan(y/x);
			return (polar(b,c));
		}
};



int main()
{
	rectangle r;
	polar p;
	r.getdata();
	p=r;
p.display();
getch();
return 0;
}

