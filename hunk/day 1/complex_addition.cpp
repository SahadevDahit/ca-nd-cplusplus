#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
public:
    int r,i;
    complex(){}
    complex(int x, int y)
    {
        r=x;
        i=y;
    }
    void display()
    {
        cout<<r<<" +j"<<i;
    }
    complex operator +(complex x)
    {
        complex temp;
        temp.r=r+x.r;
        temp.i=i+x.i;
        return temp;
    }
};
int main()
{
    complex c1(3,5),c2(5,6),c3;
    c3=c1+c2;
    c3.display();
    getch();
    return 0;
}
