#include<iostream>
using namespace std;
int main ()
{
void *ptr;
const double d = 9.0;

// Error: invalid conversion from const void* to void*
//ptr = &d;


system("pause") ;
return 0 ;
}


