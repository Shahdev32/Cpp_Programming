#include<iostream>
using namespace std;
int main ()
{
int number,sum=0;
cout<<"ENTER THE NUMBER:";
cin>>number;
for(int i=1;i<=number;i++){
	sum+=i;
	
}
cout<<"sum is "<<sum<<endl;

system("pause") ;
return 0 ;
}


