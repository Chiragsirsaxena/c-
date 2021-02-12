#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],sp=0,cp=0,sn=0,cn=0,i,n;
clrscr();
cout<<"enter a size";
cin>>n;
for(i=1;   i<=n;  i++)
{
cin>>a[i];
}
for(i=1;  i<=n; i++)
{
if( a[i]>0)
{
sp=sp+a[i];
cp=cp+1;
}
if(a[i]<0)
{
sn=sn+a[i];
cn=cn+1;
}
if(a[i]==0)
cout<<"it should neither be addded nor count";
}
cout<<"sum of +ve no is"<<sp<<endl;
cout<<"count of +ve no is"<<cp<<endl;
cout<<"sum of -ve no is"<<sn<<endl;
cout<<"count of -ve no is"<<cn<<endl;
getch();
}