#include<iostream>
using namespace std;
int main ()
{
int tno,etno;
int i=1;

cout<<"Enter the table  number:";
cin>>tno;
cout<<"End of table :";
cin>>etno;
while(i<=etno){
	cout<<tno<<"*"<<i<<"="<<tno*i<<endl;
	i++;
}

system("pause") ;
return 0 ;
}


