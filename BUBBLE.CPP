#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
clrscr();
printf("enter array size");
scanf("%d",&n);
printf("enter array elements");
for(i=1; i<=n; i++)
{
scanf("%d",&a[i][j]);
}
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
if(a[j]>a[j+1])
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
for(i=1; i<=n; i++)
{
printf("%d",a[i]);
}
getch();
}