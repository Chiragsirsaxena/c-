#include<iostream.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
cout<<"enter a character";
cin>>ch;
if(ch>='A' && ch<='Z')
cout<<"character is upper case";
else if(ch>='a'  && ch<='z')
cout<<"character is lower case";
else
cout<<"character  is special symbol";
getch();
}