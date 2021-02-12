#include<iostream.h>
#include<conio.h>
void main()
{
int n,r,i;
clrscr();
cout<<"enter a number";
cin>>n;
while(n>0)
{
r=n%10;
cout<<r;
n=n/10;
}
if(r==n)
cout<<" palindrome";
getch();
}