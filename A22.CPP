#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b);
void main()
{
int a,b;
clrscr();
cout<<"enter a ,b";
cin>>a>>b;
swap(&a,&b);
cout<<a<<endl;
cout<<b;
getch();
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}