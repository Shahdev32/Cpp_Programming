#include<iostream>
using namespace std;
int main ()
{
	float per ;
	cout<<"Enter percentage :";
	cin>>per;
	if (per>90)
cout<<"A1 grade";
else if (per>=80 && per<=90)
cout<<"A grade";
else if (per>=70 && per<=79)
cout<<"B grade";
else if (per>=60 && per<=69)
cout<<"C grade";
else if (per<60)
cout<<"F grade";


system("pause") ;
return 0 ;
}


