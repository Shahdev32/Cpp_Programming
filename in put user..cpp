#include<iostream>
using namespace std;
int main ()
{
int x[2][3];
cout<<"enter 6 element ";
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		cin>>x[i][j];
		
	}
}
cout<<"The element are :";
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		cout<<x[i][j];
		
	}
}

system("pause") ;
return 0 ;
}


