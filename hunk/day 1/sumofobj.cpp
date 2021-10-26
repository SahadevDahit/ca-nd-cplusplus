#include<iostream>
#include<conio.h>
using namespace std;
class hunk
{
    public:
        hunk(){}
        int y;
        hunk(int x)
        {
            y=x;
             }
        operator +(hunk h)
        {
            hunk sum;
        sum= y+h.y;
          //  return (sum);
      
        
         cout<<"sum of two num= "<<y+h.y<<endl;
      }   
    
};
int main()
{

    hunk h1(5),h2(10),h3;
    h3=h2+h1;
    getch();
    return 0;
}
