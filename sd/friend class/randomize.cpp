#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int num=0;
	do{
		
srand(time(0));
for(int i=0; i<10;i++)
{
    cout<<rand()%10<<endl;
}
cout<<"Would you like to do more ?";
cin>>num;
}while(num==1);


    return 0;


}
