#include<iostream>
using namespace std;
int main ()
{ int n1,n2,n3;
cout<<"Enter the first number:";
cin>>n1;
cout<<"Enter the Second number:";
cin>>n2;
cout<<"Enter the Thrid number:";
cin>>n3;
if (n1>n2 &&n1>n3)
cout<<"The first number is greatest.";
else if (n2>n1 &&n2>n3)
cout<<"The second number is greatest.";
else if (n3>n1 && n3>n1)
cout<<"The third number is greatest.";



system("pause") ;
return 0 ;
}


