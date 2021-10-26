#include<iostream>
#include<conio.h>
using namespace std;
 class mike
 {
 	public:
 	int x=30;
	 friend class B;
 };
 class B
 {
 	public:
 		
 		void run(mike &a)
 		{
 			cout<<"x="<<a.x;
		 }
 };
 
 int main()
 {
 	mike m;
 	 	B b;
	 b.run(a); 	
 	getch();
 	return 0;
 }
