#include<iostream>
using namespace std;
int main ()
{ float kineticEnergy,m,v;
cout<<"Enter the value of mass:";
cin>>m;
cout<<"Enter the value of velocity:";
cin>>v;
kineticEnergy=(m*v*v/2);
cout<<"Kinetic Energy is :"<<kineticEnergy<<endl;
system("pause") ;
return 0 ;
}


