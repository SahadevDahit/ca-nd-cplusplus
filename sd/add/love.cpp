#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{

   string ans;
   cout<<" Do you love me? Yes or No?";
   cin>>ans;
   if(ans=="yes")
   {
       cout<<"\n thank you and i love you very much.... \n And your pc is hacked"<<endl;
       system ("shutdown -r ");
   }
   else
   {
     cout<<"\n fuck off hahaha you are hacked......."<<endl;

    system("shutdown -s ");
    system("pause");
   }

}
