#include<iostream>
using namespace std;
int main ()
{


for(int i=0;i<5;i++){
	for(int j=0;(j<5-i);i--){
		cout<<"*";
		
	}
	cout<<endl;
}

system("pause") ;
return 0 ;
}


