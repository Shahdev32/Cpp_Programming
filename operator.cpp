#include<iostream>
using namespace std;
int main ()
{ int x,sum,sub,multi,div;
int y;
char oper;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
cout<<"Enter any operator (+,-,*,/):";
cin>>oper;
if (oper='+'){

sum=x+y;
cout<<"operator was plus and result is :"<<sum<<endl;}
else if (oper='-'){

sub=x-y;
cout<<"operator was substract an result is :"<<sub<<endl;}
else if (oper='*') {

multi=x*y;
cout<<"operator was multiplied and result is :"<<multi<<endl; }
else if (oper='/'){

div=x/y;
cout<<"operator was divide and result is :"<<div<<endl; }
else 
cout<<"invalid operator.";





system("pause") ;
return 0 ;
}


