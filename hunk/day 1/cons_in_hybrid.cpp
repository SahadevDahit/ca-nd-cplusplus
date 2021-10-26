#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    A(){}
    int a;
    A(int i)
    {
        a=i;
        cout<<"\n value of a = "<<a<<endl;
    }
};
class B:virtual public A
{
public:
    B(){}
    int b;
    B(int i,int j):A(i)
    {
        b=j;
        cout<<"\n value of b = "<<b<<endl;
    }
};
class C:public virtual A
{
public:
    C(){}
    int c;
    C(int i,int k):A(i)
    {
        c=k;
        cout<<"\n value of c = "<<c<<endl;
    }
};
 class D: public B, public C
{
public:
    D(){}
    int d;
    D(int i,int j,int k,int l):B(i,j),C(i,k),A(i)
    {
        d=l;
        cout<<"\n value of d = "<<d<<endl;
    }
};
int main()
{
    D d(2,3,4,5);
    getch();
    return 0;
}
