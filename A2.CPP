#include<iostream.h>
#include<conio.h>
void main()
{
int unit;
float r;
clrscr();
cout<<"enter unit";
cin>>unit;
if(unit>0 && unit<100)
r=unit*2.25;
if(unit>100 && unit<200)
r=unit*3.75;
if(unit>200 && unit<300)
r=unit*4.75;
if(unit>300)
r=unit*5.75;
cout<<"paid charge is" <<endl<<r;
getch();
}