#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10];
 int n,m=0,i,sum=0;
clrscr();
printf("enter size");
scanf("%d",&n);
for(i=1;  i<=n;  i++)
{
scanf("%d",&a[i]);
}
for(i=1;  i<=n; i++)
{
sum=sum+a[i];
m=i*(i+1)/2-sum;
}
printf("missing term is %d",m);
getch();
}

