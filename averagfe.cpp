#include<iostream>
using namespace std;
int main ()
{
int n,average,sum=0;
cout<<"enter the numbers:";
cin>>n;
for(int i=1;i<=n;i++){
	sum+=i;
}
cout<<"sum is :"<<sum;
average=sum/n;
cout<<"average is :"<<average;



system("pause") ;
return 0 ;
}


