 #include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float n,i,x=0,r,t;
float sum=0;
clrscr();
cout<<"enter n number";
cin>>n;
cout<<"enter x";
cin>>x;
for(i=1;  i<=n;  i++)
{
r=pow(x,i);
sum=sum+r/i;
}
cout<<"sum of series"<<endl<<sum;
getch();
}