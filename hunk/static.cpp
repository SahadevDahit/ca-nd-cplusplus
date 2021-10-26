#include<iostream>
using namespace std;
class acc
{
public:
int id;
string name;
static string cname;	

 acc(int a,string n)
 {
 	 id=a;
 	 name=n;
 }

 void display()
 {
 	cout<<"id ="<<id<<"  name is "<<name<<endl;
 	cout<<"college name is "<<cname<<endl;
 	
}
};

string acc::cname="nast" ;

int main()
{
	acc a=acc(100,"hunk");
	a.display();
	return 0;
}

