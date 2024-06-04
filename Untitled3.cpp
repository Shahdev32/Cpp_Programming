#include<iostream>
using namespace std;
int main ()
{
int tno,etno;
cout<<"Enter the table :";
cin>>tno;
cout<<"End of table :";
cin>>etno;
for(int i=1;i<=etno;i++){
	cout<<tno<<"x"<<i<<"="<<tno*i<<endl;
}



system("pause") ;
return 0 ;
}


