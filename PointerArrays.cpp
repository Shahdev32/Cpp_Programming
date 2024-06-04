#include<iostream>
using namespace std;
int main ()
{
float arr[3];
float *ptr;
cout<<"Display address using array :"<<endl;
for(int i=0;i<3;i++){
	cout<<"&arr["<<i<<"]="<<&arr[i]<<endl;
	
}
//ptr=&arr[0];
ptr=arr;
cout<<"Display addresses using pointer :"<<endl;
for(int i=0;i<3;i++){
	cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
	
}

system("pause") ;
return 0 ;
}


