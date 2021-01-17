#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a1[]="Grab";
char a2[]="Brag";
char temp;
int i,j;
int n=strlen(a1);
int m=strlen(a2);
clrscr();
for(i=1; i<=n;  i++)
for(j=1; j<=n;  j++)
{
if(a1[i]>a1[j])
{
temp=a1[i];
a1[i]=a1[j];
a1[j]=temp;
}
if(a2[i]>a2[j])
{
temp=a2[i];
a2[i]=a2[j];
a2[j]=temp;
}
}
if(a1[i]=a2[i])
printf("string are anagram\n");
getch();
}
