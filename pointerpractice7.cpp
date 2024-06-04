#include<iostream>
using namespace std;
int main ()
{
//In C++, we cannot assign the address of a variable of one data type to a pointer of another data type. Consider this example:
//int *ptr;
//double d=9.0;
//ptr=&d;
// ca nnot assign main()
//we can use the pointer to void (void pointers) in C+
void *ptr;
double d=9.0;
ptr=&d;
cout<<&d<<endl;
cout<<ptr<<endl;
//cout<<*ptr<<endl;
cout<<d<<endl;
system("pause") ;
return 0 ;
}


