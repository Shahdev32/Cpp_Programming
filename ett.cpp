#include<iostream>
using namespace std;
int main ()
{
int n,t1=0,t2=1,nextterm=0;
cout<<"enter number:";
cin>>n;
cout<<t1<< " "<<t2;
for(int i=1;i<=nextterm ;i++){
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
	cout<<"next term is :"<<nextterm<<endl;
}


system("pause") ;
return 0 ;
}


