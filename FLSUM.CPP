#include<stdio.h>
#include<conio.h>
void main()
{
int n,f,l,sum=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
 f=n/10000;
 l=n%10;
 sum=f+l;
printf("%d\n %d\n %d\n",f,l,sum);
getch();
}