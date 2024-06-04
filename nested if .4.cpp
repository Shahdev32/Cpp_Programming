#include <iostream>
using namespace std;
int main()
{
int a = 10; // Declare and assign values to variables
int b = 20;
int c = 30;
if ( a < b ) { // first if condition : variable a is checked with variable b
cout << " a is less than b " << endl;
if ( b < c ) { // second if condition : variable b is checked with variable c
cout << " b is less than c " << endl;
if ( a < c ) { // third if condition : variable a is checked with variable c
cout << " a is less than c " << endl;
}
}
}
cout << " End of program... " << endl;
return 0;
}


