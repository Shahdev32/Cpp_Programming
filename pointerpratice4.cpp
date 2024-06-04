#include<iostream>
using namespace std;
int main ()
{
int var=5;
int*pointervar;
 pointervar=&var;
cout<<"variable is "<<var<<endl;
cout<<"address of variable :"<<&var<<endl;
cout<<"Address of pointer variable :"<<pointervar<<endl;
cout<<"value of pointer and address of variable :"<<*pointervar<<endl;



system("pause") ;
return 0 ;
}


