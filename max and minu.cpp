
#include<iostream>
using namespace std;
int main ()
{
int a;
cout<<"Enter array size:";
cin>>a;
int arr[a];

int max,min;
cout<<"enter the array element :";
for(int i=0;i<a;i++){
	cin>>arr[i];
	//assusming first element as  the maximun and minu:
	max=arr[0];
	min=arr[0];
	//finding the max and min value;
	for(int i=1;i<a;i++){
		if(arr[i]>>max)
			max=arr[i];
			if(arr[i]<min)
				min= arr[i];
				
	}
	cout<<"max is :"<<max;
	cout<<"min is :"<<min;
	
}

return 0 ;
}


