#include<iostream>
using namespace std;
struct voter
{
    string name,add;
    int id;
};
//declaring function
//structure object is the parameter
void display(struct voter v)
{
    cout<<"\nVoter ID: "<<v.id;
    cout<<"\nName: "<<v.name;
    cout<<"\nAddress: "<<v.add<<"\n";
}
int main()
{
    voter v1;
    v1.id=1452145;
    v1.name="Debasis Jana";
    v1.add="Kolkata, West Bengal";
    //calling the function using structure object
    display(v1);
    return 0;
}

