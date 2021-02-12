#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,x=0,a=0;
clrscr();
cout<<"enter decimal number";
cin>>n;
for(i=0;  n|=0;  i++)
{
a=n%2;
x=(a)*(pow(10,i))+x;
n=n/2;
}
cout<<x;
getch();
}