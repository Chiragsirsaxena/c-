#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j;
clrscr();
printf("enter size of array");
scanf("%d",&n);
printf("enter elements");
for(i=1;  i<=n; i++)
{
scanf("%d",&a[i]);
}
for(i=0;  i<=n; i++)
{
for(j=i+1; j<=n; j++)
{
if(a[i]==a[j])
printf("%d\n",j);
}}
getch();
}
