#include<iostream>
using namespace std;
int main ()
{
void *vp;
int a=5;
float b=1.56;
char ch ='A';
vp=&a;
//cout<<*vp;// eror canot write lke that.
//type cast then print ;
cout<<endl<<*(int*)vp;

system("pause") ;
return 0 ;
}


