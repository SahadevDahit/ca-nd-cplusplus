#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<Windows.h>
using namespace std;
int main()
{
 int i,n=10;
    string name;
    cout<<"\n Enter your name:-";
    fflush(stdin);
    const char *gets(name);
  for(i=0;i<n;i++)
   {
       printf("%c\xDB",name[i]);
       printf("\b");
       Sleep(80);
          }


    return 0;
}
