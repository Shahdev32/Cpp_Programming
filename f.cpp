#include<iostream>
using namespace std;
int main ()
{
int number;

long double factorial=1.0;
cout<<"enter the number :";
cin>>number;

for(int i=1;i<=number;i++){
	factorial*=i;
	
}
cout<<"factorial is :"<<factorial <<endl;

system("pause") ;
return 0 ;
}


