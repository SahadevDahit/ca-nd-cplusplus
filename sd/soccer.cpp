#include<iostream>
#include<conio.h>
using namespace std;
class soccer
{
	public:
		soccer(){
		}
		int jn,goal,assist;
		void get()
		{
			cout<<"Enter jersey no,total goal and assist:-";
			cin>>jn>>goal>>assist;
		}
		int operator > (soccer s)
		{
			if((goal+assist)>(s.goal+s.assist))
			return 1;
			else 
			return 0;
		}
		void display()
		{
			cout<<"jersey no="<<jn<<"\n Total goal="<<goal<<"\n Assist="<<assist;
		}
};
int main()
{
	soccer s[5],best;
	for(int i=0;i<3;i++)
	{
		s[i].get();
	    best=s[0];
		for(int j=1;j<3;j++)
		{
		if(s[i]>best)
		{
			best=s[i];
		}
	}
}
	best.display();
	getch();
	return 0;
}
