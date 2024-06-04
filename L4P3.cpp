#include<iostream>
using namespace std;
int main ()
{
 int month_number;
 cout<<"Enter the number of month from (1 to 12): ";
 cin>>month_number;
 switch(month_number){
 	    case 12:
		case 1:
		case 2:
 		cout<<"It is the Winter Season";
 		break;
 		case 3: 
		case 4:
 		cout<<"It is Spring Season";
 		break;
 		case 5:
		case 6 :
		case 7: 
		case 8:
	    case 9 :
 		cout<<"It is the Summer Season";
 		break;
 		case 10:
		case 11:
 		cout<<"Its is Autumn Season";
 		break;
 		
 }



return 0 ;
}


