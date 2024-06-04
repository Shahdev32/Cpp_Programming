#include<iostream>
#include<string>
using namespace std;
void new_line();
int main ()
{
string first_Name,last_Name,record_Name;
string motto="you reacord is our record ";
cout<<"Enter the first name and last name "<<endl;
cin>>first_Name>>last_Name;
new_line();
record_Name=first_Name+","+last_Name;
cout<<"your Name in our record is :"<<endl;;
cout<<record_Name<<endl;
cout<<"Our motto is :"<<motto<<endl;
cout<<"Please suggest a better one line motto "<<endl;
getline(cin,motto);
cout<<"Our motto will be :"<<endl;
cout<<motto<<endl;
return 0;
}




