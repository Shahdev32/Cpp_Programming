#include<iostream>
using namespace std;
int main ()
{
int n;
cout<<"enter the number :";
cin>>n;
int range;
cout<<"enter range";
cin>>range;
for(int i=1;i<=range;i++){
	cout<<n<<"x"<<i<<"="<<n*i<<endl;
}


system("pause") ;
return 0 ;
}


