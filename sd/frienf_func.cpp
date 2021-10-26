#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A{
int x;
public:

void display(int x)
	{
	this->x=x;
	}
	friend void max(A&,B&);

};

class B
{
	int y;
	public:
		friend void max (A&,B&);
	void display(int y)
	{
	this->y=y;
	}
};

void max (A &a,B &b)
{
	if(a.x>b.y)
	cout<<"\n "<<a.x<<" is greater";
	else
	cout<<"\n "<<b.y<<"is greater";
}
int main()
{

    A a;
    B b;
    a.display(30);
    b.display(20);
    max(a,b);
    return 0;

}

