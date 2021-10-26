#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
	public:
		int x;
		A(){}
		A(int i)
		{
			x=i;
			}
friend void max(A,B)
};
class B
{
	public:
		int x;
		B(){}
		B(int i)
		{
			x=i;
			}
friend void max(A,B)
};
void max(A x, B y)
{
	if(x>y)
	cout<<"max = "<<x<<endl;
	else
	cout<<"min = "<<y<<endl;
}
void main()
{
	A a,
	B b;
	max(a,b);
	getch();
}
