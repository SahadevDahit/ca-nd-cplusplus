#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{

public:
    int hr,min;
    hunk(){}
    hunk(int m)
    {
     hr=m/60;
     min=m%60;
    }
    void display()
    {
    cout<<"hour= "<<hr<<endl;
    cout<<"minutes = "<<min;

    }
};
int main()
{

    hunk h;
    int minutes=128;
    h=minutes;
    h.display();
    getch();
    return 0;
}
