#include<iostream>
using namespace std;
int main ()
{ int n1;
cout<<"Enter the number:";

cin>>n1;
 long double factorial =1.0;
for(int i=1;i<=n1;i++){
	factorial*=i;
	cout<<"factorial is :"<<factorial<<endl;
}
return 0 ;
}


