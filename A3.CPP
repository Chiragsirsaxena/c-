#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,sum=0,t=1;
clrscr();
cout<<"enter n number";
cin>>n;
for(i=1;  i<=n;  i++)
{
cout<<t;
if(i<n)
{cout<<"+";
}
sum=sum+t;
t=(t*10)+1;
}
cout<<endl<<sum;
getch();
}