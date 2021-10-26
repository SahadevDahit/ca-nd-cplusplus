#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    //char name[30] = "Hunk killer";


    void fun( const char name[20])
    {
        cout<<"name= "<<name<<endl;

    }
    void fun(int r)
    {
        cout<<"roll= "<<r<<endl;

    }
void fun (int x, int y)
{
    cout<<"\n sum of "<<x<< " and "<<y<<" is "<<x+y<<endl;
    cout<<"**********************************************";
}
};

int main()
{


    student s;
    s.fun("hunk");
    s.fun(36);
    s.fun(20,30);

    return 0;
}
