#include<iostream>
using namespace std;
int main ()
{
int x[2][3];
cout<<"Enter the row:";
for(int i=1;i<3;i++){
	for(int j=1;j<3;j++){
	cin>>x[i][j];
		for(int i=1;i<2;i++){
			cout<<"["<<i<<"]["<<j<<"]"<<"="<<x[i][j]<<endl;
		}
	}
}


system("pause") ;
return 0 ;
}


