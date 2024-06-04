#include<iostream>
using namespace std;
int main ()
{
int x,y;
cout<<"Enter two numbers:";
cin>>x>>y;
if (x>y)
cout<<"The frist nmuber is greater than second.";
else if (y>x)
cout<<"The second number is greater than first one.";
else 
cout<<"Both numbers are equal.";


system("pause") ;
return 0 ;
}


