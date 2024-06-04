#include<iostream>
using namespace std;
int main ()
{
int a[]={2,4,3,0,-7};
int *p=a;
int *q=&a[3];
cout<<q-p<<endl;
cout<<p-q<<endl;
cout<<"value is "<<*q<<endl;
q=q-2;
cout<<"value is:"<<*q<<endl;
p=p+2;
cout<<q-p<<endl;
q=q-2;
cout<<*q<<endl;

system("pause") ;
return 0 ;
}


