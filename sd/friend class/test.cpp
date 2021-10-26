#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{
	public:
		int test(int x, int y)
		{if(x>y)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		}
};
int main()
{
	hunk h;
	int m=38;
	int n=8;
	int great=m;
	h.test(m,n);
	if(m>n)
	cout<<"greatest num ="<<great;
	getch();
	return 0;
}

