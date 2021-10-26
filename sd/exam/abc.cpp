#include<iostream>
#include<windows.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
 class doll
{

    string name;
    int roll;
public:
    void get()
    {
        fflush(stdin);

        cout<<"\n Enter name and roll:-";
        cin>>name>>roll;
        //fflush(stdin);
        //cout<<"\n Enter roll:-"<<endl;
        //cin>>roll;
    }
    public:

    void read()
    {
       clrscr();
        fflush(stdin);

        cout<<"\n Name is "<<name<<"\t roll no is "<<roll<<endl;

    }
    };

    int main()
    {
       system("cls");
       doll d;
       fflush(stdin);
        d.get();
        d.read();
        return 0;
    }
