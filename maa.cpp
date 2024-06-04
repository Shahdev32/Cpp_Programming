#include<iostream>
using namespace std;
int main ()
{ int n1,x,max,min;
cin>>n1;
for(int i=1;i<n1;i++){
	cout<<"enter the numbers:";
	cin>>x;
	if(x>max)
	max=x;
	if (x<min)
	min=x;
	
}
cout<<max<<endl;
cout<<min<<endl;

system("pause") ;
return 0 ;
}


