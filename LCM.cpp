#include<iostream>
using namespace std;
int main ()
{ int a,b,i;
cin>>a;
cin>>b;
cin>>i;
for(int i=1; i<=(a*b);i++)
{
	if(i%a==0 && i%b==0)
	cout<<i<<endl;
}



system("pause") ;
return 0 ;
}


