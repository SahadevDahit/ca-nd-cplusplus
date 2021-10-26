#include<iostream>
#include<conio.h>
using namespace std;
class radius
{

public:
    float hr;
    radius(){}
    radius(float m)
    {
     hr=m;
    }
float getdeg()
{
    return hr;
}
};
class area
{
public:
    float ar;
    area(){}
    area(radius h)
    {
        ar=2*3.14*h.getdeg();
    }
    void display()
    {
        cout<<"Area = "<<ar;
    }
};

main()
{

    radius h(20);
    area a;
    a=h;
    a.display();
    getch();
    return 0;
}

