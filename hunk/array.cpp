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
	};
	int main()
	{
	degree d[5];
	for(int i=0;i<3;i++)
	{
		d[i].getdata();
	}

	getch();
	return 0;
	}

