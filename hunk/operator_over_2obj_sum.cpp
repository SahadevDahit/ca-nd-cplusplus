#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	public:
		int x;
		a(int i)
		{
			x=i;
		}
		void operator +(a s)
		{
			cout<<"Addition of the given two num is "<<x+s.x;
		}
};
int main()
{
	a a1(4),a2(5);
	a1+a2;
	getch();
return 0;	
}
