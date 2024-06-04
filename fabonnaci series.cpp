#include<iostream>
using namespace std;
int main ()
{
int n, t1=0,t2=1,nextterm;
cout<<"Entwer the number :";
cin>>n;
cout<<t1<<" "<<t2;
for(int i=1;i<=n;i++){
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;	
cout<<" "<<nextterm<<" ";
}






system("pause") ;
return 0 ;
}


