#include<iostream>
using namespace std;
int main ()
{
	//Arrayname used as a popinter;
	
int arr[5];

//insert and display data using pointer notation
for(int i=0;i<5;i++){
	// storesinput in arrar[i]
	cin>>*(arr+i);	
}
for(int i=0;i<5;i++){
	cout<<*(arr+i)<<endl;
	
}

system("pause") ;
return 0 ;
}


