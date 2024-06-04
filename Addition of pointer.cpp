#include<iostream>
using namespace std;
int main ()
{
int a[5]={1,4,3,5,7};
int *p=&a[0];
cout<<"value is :"<<*p<<endl;
cout<<"address of element "<<p<<endl;
p=p+2;
cout<<"value is :"<<*p<<endl;
cout<<"address of the element "<<p<<endl;
system("pause") ;
return 0 ;
}


