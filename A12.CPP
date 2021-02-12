#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],i,large=0,small,size;
clrscr();
cout<<"enter a size";
cin>>size;
for(i=1;  i<=size;  i++)
{
cin>>a[i];
}
for(i=1;  i<=size;  i++)
{
if (a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
cout<<"large value is"<<endl<<large<<endl;
cout<<"small value is"<<endl<<small;
getch();
}