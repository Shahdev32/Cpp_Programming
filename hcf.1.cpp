#include<iostream>
using namespace std;
int main ()
{
int n1,n2,hcf,temp,i;
cout<<"Enter two number :";
cin>>n1>>n2;
//swepping the number ;
if(n1>n2){

 temp=n1;
n1=n2;
 n2=temp;
}
 for(int i=1;i<=n1;i++){
	if(n1%i==0 && n2%i==0){
		hcf=i;
		
		
	}
}
cout<<"hcf is :"<<hcf;



system("pause") ;
return 0 ;
}


