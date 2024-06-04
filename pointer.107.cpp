#include<iostream>
using namespace std;
int main ()
{
/*
int a=10;
int *p;
p=&a;
// *p=&a;
int a=10,*p=&a;
*/
int a=10;
int b=20;
int*p,*q;
p=&a;
q=&b;
cout<<a<<endl;
cout<<b<<endl;
cout<<*p<<endl;
cout<<*q<<endl;

system("pause") ;
return 0 ;
}


