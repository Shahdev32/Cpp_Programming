#include<iostream>
#include<string>
using namespace std;
int main ()
{
char choice;
string depar;
cout<<"Do you have Student ID card (Y/N)"<<endl;
cin>>choice;
if (choice=='n'||choice=='N') 
      cout<<"Your are not allowed to enter . ";
  

 if (choice=='y'||choice=='Y') {
cout<<"\nCS\nEE\nBBA\nEDU\n";
cout<<"What is your department ? ";
cin>>depar;
  if (depar=="CS") {
  
       cout<<"Go to the block 1";
       }else if (depar=="EE")
       cout<<"Go to the block 3";
      else if (depar=="BBA")
      cout<<"Go to the block 2";
      else if (depar=="EDU")
      cout<<"Go to the knowledge centre";
      
  }


system("pause") ;
return 0 ;
}


