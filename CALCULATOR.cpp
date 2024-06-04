
#include<iostream>
using namespace std;
int main ()
{     
              // Name: Shahdev 
             // CMS ID : 023-21-0130
             // Make a calculator 
	
	int num1,  num2,  result;
	char op;
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	
	cout<<"Enter the operation [+, -, *, /,]"<<endl;
	cin>>op;
	cout<<"Enter the second number :"<<endl;
	cin>>num2;
	
	
	if(op=='+')
    result = num1+num2;
	else if (op == '-')
    result = num1-num2;
	else if (op== '/')	
	result = num1/num2;
	else if (op == '*')
    result = num1 *num2;
	
	cout<<num1<<op<<num2<<"="<<result<<endl;
	return 0;


system("pause") ;
return 0 ;
}


