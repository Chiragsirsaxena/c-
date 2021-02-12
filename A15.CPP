#include<iostream.h>
#include<conio.h>
void swap(int a,int b);
void main()
{
int a,b;
clrscr();
cout<<"enter a and b";
cin>>a>>b;
swap(a,b);
getch();
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"a is"<<a;
cout<<"b is"<<b;
}