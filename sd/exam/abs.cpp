#include<iostream>
#include<conio.h>
using namespace std;
class add
{
        public:
    adder(int i=0)
    {
        total=i;
    }
    void addnum(int num)
    {
        total+=num;
    }
        int get()
        {
             return total;
        }
private:
            int total;
};
int main()
 {
     add a;
     a.addnum(5);
     a.addnum(29);
     cout<<"sum of the given no is "<<a.get();
return 0;
 }
