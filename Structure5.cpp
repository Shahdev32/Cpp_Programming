#include <iostream>
using namespace std;
struct distance{
int feets;
float inches;
}
d1 , d2, add;
int main()
{
cout<<"Please enter first distance: "<<endl;
cout<<"Please enter feets: ";
cin>>d1.feets;
cout<<"Please enter inches: ";
cin >> d1.inches;
cout<<endl<<"Pleas enter second distance: "<<endl;
cout<<"Please enter feets: ";
cin>>d2.feets;
cout<<"Please enter inches: ";
cin>>d2.inches;
add.feets=d1.feets+d2.feets;
add.inches=d1.inches+d2.inches;
if(add.inches > 12)
{
++ add.feets;
add.inches -= 12;
} 
cout<<endl<<"The sum of distances= "<<add.feets<<" feet  "<<add.inches<< " inches";
return 0;
}
