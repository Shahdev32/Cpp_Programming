#include<iostream>
using namespace std;
int main ()
{
int n,t1=0,t2=1,nextterm=0;
cout<<"enter a positive number :";
cin>>n;
cout<<t1<< " "<<t2<<" ";
nextterm=t1+t2;
while(nextterm<=n){
	cout<<nextterm<<" , ";
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
	
	
	
}



system("pause") ;
return 0 ;
}


