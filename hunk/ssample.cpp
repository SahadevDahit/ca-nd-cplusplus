#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    char name[30] = "Hunk killer";
    int roll=10;
};

int main()
{


    student s;
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    return 0;
}
