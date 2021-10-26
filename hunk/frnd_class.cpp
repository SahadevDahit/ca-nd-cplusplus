#include<iostream>
using namespace std;
class A{

int x=5;
string name="hunk killer";
friend class B;
};

class B
{
public:
    void display(A &a)
    {

        cout<<"Value of x is "<<a.x+10<<endl;
        cout<<"name of the student is "<<a.name;
    }
};

int main()
{

    A a;
    B b;
    b.display(a);
    return 0;

}

