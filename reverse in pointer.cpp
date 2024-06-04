#include<iostream>
using namespace std;
int main ()
{
float arr[5],*ptr;
int i;
cout<<"Enter five floating point values :"<<endl;
for(int i=0;i<5;i++)
{
	cin>>arr[i];
	ptr=&arr[4];
	cout<<"The values in reverse order :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*ptr--<<" ";
	}
}


system("pause") ;
return 0 ;
}


