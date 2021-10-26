#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	int hr,min;
	public:
		time(int a, int b)
		{
			hr=a;
			min=b;
		}
		operator int ()
		{
		int m=hr*60+min;
		return m;
			
		}
};
int main()
{
	time t(2,12);
	int min=t;
	cout<<"time in minutes = "<<min<<endl;
	getch();
}
