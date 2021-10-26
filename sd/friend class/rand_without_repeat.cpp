#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    char name[30];
    int i, n;
srand(time(0));
cout<<"\n Total student:-";
cin>>n;
while(true)
{
    for(i=0;i<n;i++)
{
    cout<<"\n Enter a name:-";
    fflush(stdin);
    getline(cin,name[i]);
}

    for(int i=0; i<n;i++)
    {

   int index=rand()%n;


    string  temp;
     strcpy(temp,name[i]);
    strcpy(name[i],name[index]);
    strcpy(name[index],temp);


}
for(i=0;i<n;i++)
     cout<<name[index]<<endl;


}
    return 0;

}
