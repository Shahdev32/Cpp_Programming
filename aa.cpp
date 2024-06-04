#include<iostream>
using namespace std;
int main ()
{
int x[2][3];
cout<<"THe enter the numbweras";

for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		cin>>x[i][j];
	}
}
cout<<"THE numbers are:";
	for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		cout<<x[i][j];
	}
	cout<<endl;
}



system("pause") ;
return 0 ;
}


