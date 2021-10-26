#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
T max (T a, T b)
{
  T temp;
  temp=a;
  a=b;
  b=a;
  return (a,b);
}
int main()
{
    cout<<max(5,6)<<endl;
    getch();
    return 0;
}
