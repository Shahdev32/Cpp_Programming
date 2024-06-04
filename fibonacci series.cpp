#include<iostream>
using namespace std;
int main ()
{
//0 1 1 2 3 5 8 13 21 34 55 
int n1=0,n2=1,n3;
{
	cout<<n1<<n2;
}
for(int i=1;i<10;i++){
	n3=n2+n1;
	n1=n2;
	n2=n3;
	cout<<n3;
	cout<<n3<<" "<<endl;
}

system("pause") ;
return 0 ;
}


