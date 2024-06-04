#include<iostream>
using namespace std;
int main ()
{

 int n;
 cout<<"enter the numbers:";
 cin>>n;
 for(int i=1;i<=n;i++){
 if(i==2||i==4)
cout<<"light is off"<<endl;
else
cout<<"light is on:"<<endl;; 	
 }



system("pause") ;
return 0 ;
}


