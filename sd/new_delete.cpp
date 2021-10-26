#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
int main()
{

    string *p=new string[2];
    /*std::cout<<"The value is "<<*p<<endl;
    *p=20;
    std::cout<<"The value is "<<*p;*/
int n;
    cout<<"\n Total no of student is ";
    cin>>n;
    p=new string [n];
    cout<<"\n*******************************************************"<<endl;
    for(int i=0;i<n;i++)
    {
        fflush(stdin);

        cout<<"\n Name of  "<<1+i<<"  student is  ";
        getline(cin,p[i]);

    }

    cout<<"\n*******************************************************"<<endl;
    cout<<"\n*******************************************************"<<endl;
    for(int i=0;i<n;i++)
    {
        fflush(stdin);

        std::cout<<"\nName of "<<i+1<<" student is  "<<p[i];
    }
    cout<<"\n*******************************************************"<<endl;
    delete[] p;
    return 0;
}
