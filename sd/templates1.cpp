#include<iostream>
#include<conio.h>
using namespace std;
template <class t>
t max(t &a,t &b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}

int main()
{
    cout<<max(54,20)<<endl;
    cout<<max(0.2,0.98)<<endl;
    cout<<max(4.7,4.9);
    getch();
    return 0;
}
