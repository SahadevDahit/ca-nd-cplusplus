#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{
public:
	virtual void show()
	{
		cout<<"hunk 's function"<<endl;
	}
	
};
class killer:public hunk
{
public:
void show()
{
	cout<<"killer's function show";
	
	}	
};
int main ()
{
	hunk h;
	killer k;
	hunk *p;
	p=&k;
	p->show);
	getch();
	return 0;
}
