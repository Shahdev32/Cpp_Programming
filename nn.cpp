#include<iostream>
using namespace std;
int main ()
{
int n,n1;
cout<<"enter array size:";

cin>>n;
int arr[n];
cout<<"enter the array element :";
for(int i=0;i<=n;i++){
	cin>>arr[i];
}
	cout<<"The values on the odd indices are :";
	for(int i=0;i<n;i++){
		if(i%2!=0){
		
		continue;
		
	}
cout<<arr[i]<<endl;
}



system("pause") ;
return 0 ;
}


