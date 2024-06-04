#include<iostream>
using namespace std;
int main ()
{
void* ptr;
float* fptr;
float f = 2.3;

// assign float address to void pointer
ptr = &f;
//cout << *ptr << endl;  // Error

// assign float address to float pointer
fptr = &f;
cout << *fptr << endl;   // Valid


system("pause") ;
return 0 ;
}


