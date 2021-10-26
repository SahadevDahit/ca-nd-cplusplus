#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
X max(X &a,X &b)
{
    if(a>b)
        return (a);
    else
        return (b);
}

int main()
{
    cout<<max(50,20)<<endl;
    cout<<max(0.2,0.98)<<endl;
    //cout<<max(4.7,4.9);
    getch();
    return 0;
}
