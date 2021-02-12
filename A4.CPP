#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,t=1;
int sum=0;
clrscr();
cout<<"enter n number";
cin>>n;
for(i=1;  i<=n;  i++)
{
cout<<t;
if(i<n)
cout<<"+";
sum=sum+t;
t=t+i;
}
cout<<"sum of series"<<endl<<sum;
getch();
}
