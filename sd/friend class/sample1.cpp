#include<iostream>
using namespace std;
class A{

int x=5;
string name="Hunk Killer";
friend class B;
};

class B
{
public:
    void display(A &a)
    {

        cout<<"Value of x is "<<a.x<<endl;
        cout<<"Name is "<<a.name<<endl;
    }
};

int main()
{

    A a;
    B b;
    b.display(a);
    return 0;

}
