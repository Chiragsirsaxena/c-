#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
float fact=1,sum=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1; i<=n;  i++)
{
for(j=1; j<=i; j++)
fact=fact*j;
sum=sum+i/fact;
}

printf("\nsum of series%f",sum);
 getch();
 }