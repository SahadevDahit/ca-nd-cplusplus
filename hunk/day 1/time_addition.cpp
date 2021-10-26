#include<iostream>
#include<conio.h>
using namespace std;
class time
{
public:
    int sec,min;
    time(){}
    time(int x)
    {
        sec=x;

    }
    void display()
    {
        cout<<"second = "<<sec<<endl;
        cout<<"minute= "<<min<<endl;
    }
    time operator +(time x)
    {
        time temp;
        int r;
        temp.sec=(sec+x.sec)%60;
        temp.min=(sec+x.sec)/60;

        return temp;
    }
};
int main()
{
    time t1(50),t2(50),t3;
    t3=t1+t2;
    t3.display();
    getch();
    return 0;
}

