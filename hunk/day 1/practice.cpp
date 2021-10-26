#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class hunk
{
public:
    int phy,math,therm,oop,app;
    void getdata()
    {
        cout<<" Enter marks in phy,math,therm,oop,app:-";
        cin>>phy>>math>>therm>>oop>>app;
        if((phy>=45&&phy<=100)&&(math>=45&&math<=100)&&(therm>=45&&therm<=100)&&(oop>=45&&oop<=100)&&(app>=45&&app<=100))
        cout<<"\n pass";
        else
        cout<<"\n Fail\n";

    }
};
int main()
{
      int n;
    hunk h[n];
    cout<<"\n Enter total no of student:-";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<*p;i++)
    
	{
        h[i].getdata();
    }
    delete [] p;
    getch();
    return 0;
}
