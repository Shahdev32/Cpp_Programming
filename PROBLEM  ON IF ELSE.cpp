#include<iostream>
using namespace std;
int main ()
{ int age;
char sex;
char martialstatus;
cin>>sex;
cin>>age;
cin>>martialstatus;
if (sex =='m'){
	if(age>=20&&age<=40)
	cout<<" he may work in anywhere";
	else if(age>=40&&age<=60)
	cout<<" he may work in urban area";
   else if (sex=='f')
   cout<<"she will work only in urban areas.";
   else 
   cout<<"Error ";
}


system("pause") ;
return 0 ;
}


