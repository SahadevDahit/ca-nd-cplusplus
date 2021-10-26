#include<iostream>
#include<conio.h>
using namespace std;
class fibo
{
	public:
	int num,a=0,b=1;
	fibo():num(0){}
	void operator ++(int)
	{
	 
		num=a+b;
		a=b;
		b=num;
	}

	void display()
	{
	
		cout<<num<<"\t";
	}
};
int main()
{
	fibo f;
	cout<<"0 \t 1 \t";
	for(int i=0;i<8;i++)
	{
		f++;
		f.display();
	}
	getch();
	return 0;
}
