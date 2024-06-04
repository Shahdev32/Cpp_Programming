#include<iostream>
using namespace std;
int main ()
{
int a=10;
float b=25.23;
char c='$';
void *ptr;
ptr=&a;
cout<<"the value of n "<<a<<endl;
cout<<"THe address stored in the pointer :"<<ptr<<endl;
ptr=&b;
cout<<"the value of n "<<b<<endl;
cout<<"THe address stored in the pointer :"<<ptr<<endl;
ptr=&c;
cout<<"the value of n "<<c<<endl;
cout<<"THe address stored in the pointer :"<<ptr<<endl;


return 0;
}



