#include<iostream>
using namespace std;
int main ()
{
int x,y ,gcd,lcm,a,b,t;
cout<<"Enter the two number:";
cin>>x>>y;
a=x;
b=y;
while(b!=0)
{
	t=b;
	b=a%b;
	a=t;
	
}
gcd=a;
lcm=(x*y)/gcd;
cout<<"GCD is :"<<gcd<<"and LCM is :"<<lcm<<endl;



return 0 ;
}


