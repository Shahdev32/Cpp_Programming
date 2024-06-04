#include<iostream>
using namespace std;
int main ()
{
int tno,etno;
int i=1,choice;

cout<<"Enter the table  number:";
cin>>tno;
cout<<"End of table :";
cin>>etno;
do{
		cout<<tno<<"*"<<i<<"="<<tno*i<<endl;
	
	cout<<"Do you want to continues ";
	cin>>choice;
}while(choice=='y');

system("pause") ;
return 0 ;
}


