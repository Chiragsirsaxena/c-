#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1; i<=5;  i++)
{
k=64+5;
cout<<endl;
for(j=1; j<=5;  j++)
{
if(j<=i)
{
cout<<(char)(k);
k++;
}
else
cout<<" ";
}
}
getch();
}