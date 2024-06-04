/*struct structure1
{
    Member1;
    member2;
};

struct structure2
{
    Member1;
    Member2;
    struct structure1 obj;	
};
main()
{
    structure2 st2;
    //To access member of structure2, just simply write
    st2.Member1;
    
    //To access member of structure1, we have to write
    st2.obj.Member2;
}
*/
#include<iostream>
using namespace std;
struct salary
{
    int DA,TA,Total;
};
struct Employee
{
    string name,add;
    //declaring structure salary as a nested structure
    struct salary s;
};
void display(struct Employee E1)
{
    cout<<"\nName: "<<E1.name;
    cout<<"\nAddress: "<<E1.add;
    cout<<"\nDA+TA: "<<((E1.s.DA)+(E1.s.TA));
    cout<<"\nTotal Salary: "<<((E1.s.DA)+(E1.s.TA)+(E1.s.Total))<<"\n";

}
int main()
{
    Employee E;
    //adding values to the member of Employee structure
    E.name="Ankit";
    E.add="Pune";
    //Adding values to the member of salary structure
    E.s.DA=1400;
    E.s.TA=2800;
    E.s.Total=36000;
    //calling display function
    display(E);

}

