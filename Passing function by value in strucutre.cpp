#include<iostream>
using namespace std;
struct employee{
	int id;
	char name[25];
	int age;
	float salary;
};
void display(employee);
int main()
{
	employee emp{1,"Asif",21,75000};
	display(emp);
	
}
void display(employee emp)
{
	cout<<emp.id<<endl;
	cout<<emp.name<<endl;
	cout<<emp.age<<endl;
	cout<<emp.salary<<endl;
	
}
