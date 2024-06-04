#include<iostream>
using namespace std;
int main ()
{
	/*
int x[3]={3,2,1};
 cout<<x[0]<<endl;
 //x[1]=45;
 //cout<<x[2]<<endl;
 cout<<x[1];
 cin>>x[2]<< cout<<x[2];
*/
/*

int x[3];
cout<<"Enter the values :";
cin>>x[0];
cin>>x[1];
cin>>x[2];
cout<<"the value are :";
cout<<x[0];
cout<<x[1];
cout<<x[2];
*/


/*
float x[5];
for(int i=1;i<=5;i++){
	cin>>x[i];
	
}
for(int i=1;i<=5;i++){
	cout<<x[i];
	
}
*/
int n;
cin>>n;
int x[n];
int sum=0;

for(int i=1;i<n;i++){
	cin>>x[i];
	
}
for(int i=1;i<n;i++){
	cout<<x[i];
	sum+=n;
	
}
cout<<sum;
system("pause") ;
return 0 ;
}


