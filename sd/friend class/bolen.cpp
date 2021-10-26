#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
    bool status=true;
    int num;
    do
    {
    cout<<"\n Enter a number:-";
 cin>>num;
    if(num%2!=0)
        status=!status;
    cout<<"\n status is "<<status<<endl;

}while(true);  //type ctrl+c to exit the program.
    return 0;
}


