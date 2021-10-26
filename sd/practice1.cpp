#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
class add
{
    int a,b,c;
public:
    inline void get_data(int x, int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }

inline void display()
{

cout<<"\n The sum of the given number is "<<a+b<<endl;

std::string name=c>10? "hunk":"killer";
cout<<"\n The name is "<<name<<endl;
}
};
int main()
{

    add a1;
    a1.get_data(10,20,32);
    a1.display();
    return 0;
}
