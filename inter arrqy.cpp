#include<iostream>
using namespace std;
int main ()
{
int x[6];
cout<<"Enter the arrary elemest numbers:";
for(int i=1;i<=6;i++){
	cin>>x[i];
	for(int i=1;i<=6;i++){
		cout<<x[i]<<" ";
	}
}


system("pause") ;
return 0 ;
}


