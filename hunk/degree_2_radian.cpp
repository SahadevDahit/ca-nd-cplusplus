#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class degree
{
	public:
	float deg;
	public:
		degree(){}
	void getdata()
	{
		cout<<"enter degree:";
		cin>>deg;
	}
float getdeg()
{return deg;
}
};

class radian
{
	public:
		float rad;
		radian(){}
		radian (degree x)
		{
			rad=x.getdeg()*3.14/180;
		}
		void display()
		{
			cout<<" degree in radian:-"<<rad;
		}
	};
	int main()
	{
		degree d;
		d.getdata();
		radian r;
		r=d;
		r.display();
		getch();
	return 0;
	}

