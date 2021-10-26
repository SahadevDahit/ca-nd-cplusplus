#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<Windows.h>
using namespace std;
int main()
{
int i=0;
    string name;
    cout<<"\n Enter your name:-";
getline(cin,name);
    //    for(i=0;i<n;i++)

   while(name[i]!='\0')
   {
       cout<<name[i]<<"\xDB";
       cout<<"\b";
       Sleep(100);
       i++;
    }


    return 0;
}
