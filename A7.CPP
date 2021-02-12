#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k=1;
clrscr();
for(i=1;  i<=5;  i++)
{
cout<<endl;
for(j=1;   j<=5;  j++)
{
if(j<=i)
{
cout<<k;
k++;
}
else
cout<<"";
}
}
getch();
}