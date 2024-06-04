#include<iostream>
using namespace std;
int main ()
{
int x[2]={23,54,66};
int *p;
p=&x;
cout<<*(x+1);
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;


system("pause") ;
return 0 ;
}


