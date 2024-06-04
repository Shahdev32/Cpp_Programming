#include<iostream>
using namespace std;
int main ()
{
	char gender;
	cin>>gender;
	switch(gender) {
     	case'm':
		cout<<"Welcome Sir.";
		break;
		case'M':
		cout<<"Welcome sir.";
		break;
		case'f':
       cout<<"Welcome mam.";
       break;
	   case'F':
	   cout<<"Welcome mam.";
	   break;
	   default:
	   	cout<<"Invalid input";
	   		

}

system("pause") ;
return 0 ;
}


