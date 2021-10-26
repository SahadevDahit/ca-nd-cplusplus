#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{

public:
    float hr;
    hunk(){}
    hunk(float m)
    {
     hr=m;
    }
    operator float()
    {
        float min;
    min=hr*60;
    cout<<"minutes = "<<min;

    }
};
int main()
{

    hunk h(2);
    float minutes=h;
    getch();
    return 0;
}

