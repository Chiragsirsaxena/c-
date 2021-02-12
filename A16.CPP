#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,x=0,a=0;
clrscr();
cout<<"enter binary number";
cin>>n;
for(i=0;  n|=0;  i++)
{
a=n%10;
x=(a)*(pow(2,i))+x;
n=n/10;
}
cout<<x;
getch();
}