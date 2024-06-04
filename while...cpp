#include<iostream>
using namespace std;
int main ()
{
int n;
int sum=0;
cout<<"enter n";
cin>>n;
while(n>=0){
	sum+=n;
	cout<<"enter the number :";
	cin>>n;
}
cout<<sum;


system("pause") ;
return 0 ;
}


