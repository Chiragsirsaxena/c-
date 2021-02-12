#include<stdio.h>
#include<conio.h>
int fact();
void main()
{
clrscr();
fact();
getch();
}
int fact()
{
int n,fact=1;
printf("enter n");
scanf("%d",&n);
for(int i=1;   i<=n; i++)
{
fact=fact * i;
}
printf("%d",fact);
 }
