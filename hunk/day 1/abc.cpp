#include<iostream>
#include<conio.h>
using namespace std;

 class height
 {
    int meter;
    int feet;
    int inch;
public:
    void readdata()
    {
        cout<<" enter the height in inch:-";
        cin>>inch;
        cout<<" enter the height in feet:-";
        cin>>feet;
        cout<<" enter the height in meter:-";
        cin>>meter;
    }
   // void calculate()
   // {
     //   int feets[10],meters[10],inch[10];
//
  //      feets=inch/12;
    //    feet=feet+feets;
      //  meter=meters+(feet/3.28084);
    //}
    void display()
    {
        cout<<" the height in meters is:-"<<meter;
    }
 };
 void main()
 {
     height h;
     int feet,meters;
     h.readdata();
  		feets=inch/12;
  		feet=feet+feets;
  		meters=meter+feet/3.28
  	
     //h.calculate();
     h.display();
     getch();
 }
