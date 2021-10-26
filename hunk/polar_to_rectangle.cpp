#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class rectangle
{
	public:
		float x,y;
		rectangle(){}
	rectangle(float a,float b)
	{
		x=a;
		y=b;
		}	
	void display()
	{cout<<"polar in rectangle x="<<x<<" y ="<<y;}
	};
	
class polar
{
	public:
		float r,a;
		polar(){}
		void getdata()
		{
			cout<<"enter radius and angle ";
			cin>>r>>a;
		}
		operator rectangle()
		{
			float b,c;
			b=r*cos(a);
			c=r*sin(a);
			return (rectangle(b,c));
		}
};
int main()
{
	rectangle r;
	polar p;
	p.getdata();
	r=p;
r.display();
getch();
return 0;
}
	
