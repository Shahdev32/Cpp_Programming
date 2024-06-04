#include<iostream>
using namespace std;
int main ()
{
// changong value pointed by pointer;
int var=5;
int *pointvar;
pointvar=&var;
cout<<*pointvar<<endl;
// chaging value fro m5 to 7;
 var=7;
cout<<*pointvar<<endl;
 var=16;
cout<<*pointvar<<endl;
*pointvar=15;
cout<<var<<endl;



system("pause") ;
return 0 ;
}


