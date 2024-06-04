#include <iostream>
using namespace std;
typedef struct complex
{
float real;
float imaginary;
}
complexNumber;
complexNumber addComplexNumbers(complex, complex);
int main()
{
complexNumber num1, num2, temporaryNumber;
char signOfImag;
cout<<"1st complex number: "<< endl;
cout<<"Please enter real & imaginary parts respectively: "<<endl;
cin>>num1.real >> num1.imaginary;
cout<<endl<<"2nd complex number: "<<endl;
cout<<"Please enter real and imaginary parts respectively:" <<endl;
cin>>num2.real>>num2.imaginary;
signOfImag = (temporaryNumber.imaginary > 0) ? '+' : '-';
temporaryNumber.imaginary = (temporaryNumber.imaginary > 0) ? temporaryNumber.imaginary : -temporaryNumber.imaginary; 
temporaryNumber = addComplexNumbers(num1, num2);    
cout<<"Sum = "<< temporaryNumber.real<<"  "<<temporaryNumber.imaginary<<"i";
return 0;
}
complexNumber addComplexNumbers(complex num1,complex num2)
{
complex tmp;
tmp.real = num1.real+num2.real;
tmp.imaginary = num1.imaginary+num2.imaginary;
return(tmp);
}
