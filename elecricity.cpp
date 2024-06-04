#include<iostream>
#include<string>
using namespace std;
int main ()
{ int customerid,units,totalamount;
  string name;
  cout<<"Enter customerID :";
  cin>>customerid;
  cout<<"Enter the name :";
  cin>>name;
  cout<<"Enter the units:";
  cin>>units;
  if (units>=1 &&units<=199)
  {
  totalamount=5*units;
  cout<<"total amount is :"<<totalamount<<endl;}
   else if (units>=200 &&units<=399)
  {
  totalamount=10*units;
  cout<<"total amount is :"<<totalamount<<endl;}
  else if (units>=400 &&units>=599)
  {
  totalamount=15*units;
  cout<<"total amount is :"<<totalamount<<endl;}
  else if (units>=600)
 {
 totalamount=20*units;
  cout<<"total amount is :"<<totalamount<<endl;}
  


system("pause") ;
return 0 ;
}


