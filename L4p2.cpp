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
switch (oper){
    	case'+':
        sum=x+y;
        cout<<"operator was plus and result is :"<<sum<<endl;
        break;
        case '-':
    	sub=x-y;
        cout<<"operator was substract an result is :"<<sub<<endl;
        break;
        case '*':
        multi=x*y;
        cout<<"operator was multiplied and result is :"<<multi<<endl;
        break;
        case'/':
		div=x/y;
       cout<<"operator was divide and result is :"<<div<<endl; 
		break;
       defaut:
       cout<<"invalid operator.";
       break;
}




system("pause") ;
return 0 ;
}


