#include<iostream>
using namespace std;
int main ()
 { int i=1,tno,s_tno;
 char choice;
 cout<<"\n Start ";
 do {
 	cout<<"\n Enter the table no:";
 	cin>>tno;
 	cout<<"End Start of table no:";
 	cin>>s_tno;
 	cout<<tno<<"*"<<s_tno<<" ="<<tno*s_tno<<endl;
 	
 	cout<<"Do you want to continue :";
 } while(choice='y');



system("pause") ;
return 0 ;
}


