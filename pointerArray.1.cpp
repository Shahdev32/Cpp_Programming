#include<iostream>
using namespace std;
int main ()
{

int p[5]={1,2,3,45,54};
int *v;
v=&p[0];
v=&p[1];
v=&p[2];
v=&p[3];
v=&p[4];

cout<<v<<" "<<endl;
cout<<v+1<<" "<<endl;
cout<<v+2<<" "<<endl;
cout<<v+3<<" "<<endl;
system("pause") ;
return 0 ;
}


