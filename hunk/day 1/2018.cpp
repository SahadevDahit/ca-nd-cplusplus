#include<iostream>
#include<conio.h>
using namespace std;
class height
{
	public:
		float inch,feet;
		height(float in,float fe)
		{
			inch=in;
			feet=fe;
		}
		operator float()
		{
			float metre;
			metre=3.28084*(inch+feet*12);
				cout<<"\n height in meter is "<<metre;
		
		}
	
};
int main()
{
  height h(12,23);
  float metre=h;
//  metre.display();

	
	
	getch();
	return 0;
}
