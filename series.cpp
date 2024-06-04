#include<iostream>
using namespace std;
int main ()
{
int n,i,inc=1,val=1,temp;
cout<<"nimber limit :";
cin>>n;
for(int i=1;i<=n;i++){

if(n>=1){

inc=inc+2;
temp=inc;
val=val+temp;
}
if(i==n){

cout<<val<<endl;}

else
cout<<val<<endl;
}

system("pause") ;
return 0 ;
}


