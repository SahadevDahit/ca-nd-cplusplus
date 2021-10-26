#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
void fun (T &a, T &b)
{
/*	a=a+b;
	a=a-b;
	b=(a+b)-a;
*/
T temp;
temp=a;
a=b;
b=temp;
	cout<<"a= "<<a <<" and b ="<<b;
}
int main()
{
	int a=5;
	int b=10;
//	cout<<"Enter value of a and  b :-";
//	cin>>a>>b;
	fun(a,b);
	
	
	getch();
	return 0;
}
