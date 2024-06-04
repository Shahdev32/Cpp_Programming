#include<iostream>
using namespace std;
int main ()
{
 int n,a=0,b=1,c,i;
 cout<<"Enter the number ";
 cin>>n;
 for(i=1;i<=n;i++){
 	cout<<a<<" ";
 	c=a+b;
 	a=b;
 	b=c;
 	
 }


system("pause") ;
return 0 ;
}


