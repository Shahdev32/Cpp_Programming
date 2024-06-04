#include<iostream>
using namespace std;
int main ()
{
int a;
cout<<"Enter array size:";
cin>>a;
int arr[a];
cout<<"enter the array element :";
for(int i=0;i<a;i++){
	cin>>arr[i];
	
}
cout<<"the array element are  :";
for(int i=0;i<a;i++){
	cout<<arr[i]<<endl;
}
cout<<"Reverse oder of array are:";
for(int i=0;i<=a;a--){
	cout<<arr[a-1]<<" ";
	
}

system("pause") ;
return 0 ;
}


