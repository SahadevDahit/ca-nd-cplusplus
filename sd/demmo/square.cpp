#include<iostream>
#include<conio.h>
using namespace std;
inline int sqrt(int x)
{

    return(x*x);
}
int main()
{

 int num;
   cout<<"\n Enter the number:-";
   cin>>num;
   cout<<"\n Square of the given number is "<<sqrt(num);
    return 0;
}
