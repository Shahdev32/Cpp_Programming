#include<iostream>
using namespace std;
int main ()
{
double factorial=1.0;
int n;
cout<<"Enter the number:";
cin>>n;
for(int i=1;i<=n;i++){
	factorial*=i;
cout<<factorial<<endl;	
}


system("pause") ;
return 0 ;
}


