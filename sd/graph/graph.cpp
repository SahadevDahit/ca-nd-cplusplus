#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i,j, gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:/tc/bgi");
setcolor(YELLOW);
setbkcolor(RED);
for(j=1;j<=10;j++)
{
  printf ("%5d",j);
  sound(j*500);
  delay(600);
  }
  nosound();

for(i=0;i<350;i++)
 {
 circle(100+i,100,70);
 delay(10);
 rectangle(500,10+i,50,300);
 circle(50,150+i,50);
 delay(10);
 cleardevice();
 }
 getch();
 closegraph();
 }

