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
	 operator radian()
	{
		float x;
		x=deg*(3.14/180);
		return (radian(x));
	}
};

class radian
{
	public:
		float rad;
		radian(){}
		radian (float y)
		{
			rad =y;
		}
		void display()
		{
			cout<<" degree in radian:-"<<rad;
		}
	};
	int main()
	{
		degree d;
		radian r;
		d.getdata();
		
		r=d;
		r.display();
		getch();
	return 0;
	}

