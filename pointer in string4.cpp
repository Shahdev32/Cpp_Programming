#include<iostream>
using namespace std;
int main ()
{
char str[]="hello programming ";
char ch,*ptr,s;
s='n';
ptr=str;
cout<<"enter sny character to find :";
cin>>ch;
while(*ptr++!=0)
if(*ptr==ch)
s='y';
if(s=='y')
cout<<"the character is found in the array :"<<endl;
else
cout<<"the character is not found in the array ."<<endl;
return 0 ;
}


