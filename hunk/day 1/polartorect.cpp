#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
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
	};
class rectangle
{
	public:
		float b=0,c=0;
		rectangle(){}
	  rectangle(polar p)
		{
			b=p.r*cos(p.a);
			c=p.r*sin(p.a);
		}
	void display()
	{cout<<"polar in rectangle x="<<b<<" y ="<<c;}
	};
int main()
{

	polar p;
	p.getdata();
	rectangle r;
	r=p;
r.display();
getch();
return 0;
}


