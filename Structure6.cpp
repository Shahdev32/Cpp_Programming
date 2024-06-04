#include <iostream>
using namespace std;
struct stu
{
int rol;
float marks;
char n[50];
} 
k[10];
int main()
{
cout <<"Please enter information of students: "<<endl<<endl;
for(int i=0;i<3;++i)
{
k[i].rol = i+1;
cout<<"For Roll No: "<<k[i].rol<<","<<endl;
cout<<"Please enter name: ";
cin>>k[i].n;
cout<<"Please enter marks: ";
cin>>k[i].marks;
cout<<endl;
}
cout<<"Showing Information: "<<endl;
for(int i=0;i<10;++i)
{
cout<<endl<<"Roll No: "<<i+1<<endl;
cout<<"Name: " <<k[i].n<<endl;
cout<<"Marks: "<<k[i].marks<<endl;
}
return 0;
}
