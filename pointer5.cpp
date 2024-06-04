#include<iostream>
using namespace std;
int main ()
{
// changing value of pointed by pointer 
int var=5;
int *pointvar;
pointvar=&var;
*pointvar=1;
cout<<*pointvar<<endl;
cout<<var<<endl;


system("pause") ;
return 0 ;
}


