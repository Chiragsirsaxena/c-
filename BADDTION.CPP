#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,n1,x=0,a=0,y=0,b=0,sum=0,c=0,z=0;
clrscr();
cout<<"enter a  2 number";
cin>>n>>n1;
for(i=0; n|=0; i++)
{
a=n%10;
x=(a)*(pow(2,i))+x;
n=n/10;
}
for(i=0;  n1|=0;  i++)
{
b=n1%10;
y=(b)*(pow(2,i))+y;
n1=n1/10;
}
cout<<x<<endl;
cout<<y<<endl;
sum=x+y;
cout<<sum<<endl;
for(i=0;  sum|=0;   i++)
{
c=sum%2;
z=(c)*(pow(10,i))+z;
sum=sum/2;
}
cout<<z;
getch();
}