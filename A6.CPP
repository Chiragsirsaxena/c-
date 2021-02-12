#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float n,i,fact=1,j,x=0,r,sum=0;
clrscr();
cout<<"enter n";
cin>>n;
cout<<"enter x";
cin>>x;
for(i=1;  i<=n;  i++)
{
fact=fact*i;
cout<<fact;
for(j=1;  j<=i;  j++)
{
r=pow(x,i);
i+2;
sum=sum+r/fact;
}
}
cout<<"sum of series"<<endl<<sum;
getch();
}