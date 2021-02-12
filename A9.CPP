#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
cout<<"enter a number";
cin>>n;
for(i=1;  i<=n; i++)
{
if(n%i==0)
{
cout<<"factor is"<<i<<endl;
sum=sum+i;
}
}
if(sum>n)
cout<<"abundant";
if(sum<n)
cout<<"deficient";
if(sum==n)
cout<<"perfect";
getch();
}
