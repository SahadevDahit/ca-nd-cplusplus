#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{
public:

 ~ hunk()  {cout"\n base destructor"; }
};
int main ()
{
	hunk *h=new hunk();
	getch();
	return 0;
}
