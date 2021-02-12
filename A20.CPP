#include<iostream.h>
#include<conio.h>
void lcm(int a,int b,int l);
void main()
{
int a,b,l;
clrscr();
cout<<"enter a ,b";
cin>>a>>b;
lcm(a,b,l);
getch();
}
void lcm(int a,int b,int l)
{
for(l=1; l<=a*b;  l++)
if(l%a==0 && l%b==0)
cout<<"lcm is"<<l;
}