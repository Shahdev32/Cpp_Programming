#include<iostream>
using namespace std;
int main ()
{
int arr[5],i,j,temp;
cout<<"Enter array element :";
for(i=0;i<5;i++){
	cin>>arr[i];
}
cout<<"The originol value is :";
for(i=0;i<5;i++){
	cout<<arr[i]<<" ";
	                      
}
for(j=0;j<4;j++){
	if(arr[j]>arr[j+1]){
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	cout<<"The sorted element of arry :";
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
		
	}
}
system("pause") ;
return 0 ;
}


