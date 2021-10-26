#include<string>
#include<string.h>
#include<iostream>
using namespace std;
class a
{
	public:
	int roll;
	//string name;
	public:
		 
		void get()
		{
		void display();
			cout<<"acess"<<endl;
		}
					
			//	strcpy(name,nam);
					
	
};


class b:public a
{
	public:
		void display()
{
	int roll=34;
	int id=1;
	cout<<" Your name is hunk  "<<"\n roll = "<<roll<<"\n id="<<id<<endl;
}

};



int main()
{
b b1;
b1.get();	
	return 0;

}
