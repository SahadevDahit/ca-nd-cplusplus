#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{

public:
    int num=6;
    hunk(){}
    int operator ++(int)
    {

        num=num+1;
        cout<<num;
    }
};
int main()
{

    hunk h;
    h++;
    getch();

}
