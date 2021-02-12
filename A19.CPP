#include<iostream.h>
#include<conio.h>
void hcf(int a,int b,int r);
void main()
{
int a,b,r;
clrscr();
cout<<"enter a,b";
cin>>a>>b;
hcf(a,b,r);
getch();
}
void hcf(int a,int b,int r)
{
if(a>b)
{
while(r|=0)
{
r=a%b;
a=b;
b=r;
cout<<a<<endl;
}
}
else
{
while(r|=0)
{
r=b%a;
b=a;
a=r;
}
}
cout<<b;
}