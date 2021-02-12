#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,size,sum=0,j;
clrscr();
cout<<"enter array size";
cin>>size;
cout<<"enter array elements";
for(i=1; i<=size;  i++)
{
cin>>a[i];
}
for(i=1; i<=size;  i++) {
for(j=i;  j<=size; j++)  {
if(i==j)
continue;
sum+=a[i]*a[j];
}
}
cout<<"sum is"<<sum<<endl;
getch();
}