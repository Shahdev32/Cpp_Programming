#include<iostream>
using namespace std;
int main ()
{
int a=10;
int *p=&a;
int **q=&p;
int ***r=&q;
cout<<a<<endl;
cout<<*p<<endl;
cout<<*(*q)<<endl;
cout<<*(*(*r))<<endl;
system("pause") ;
return 0 ;
}


