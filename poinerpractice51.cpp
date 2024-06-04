#include<iostream>
using namespace std;
int main ()
{
int a[6]={56,34,65,22,77,35};
int *p;
p=&a[0];
cout<<*p<<endl;
*(p++);
cout<<*p;
p=&a[3];
cout<<p;
cout<<*p;



system("pause") ;
return 0 ;
}


