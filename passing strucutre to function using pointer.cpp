#include<iostream>
using namespace std;
struct student
{
	int rolno;
	int marks;
	float gpa;
	
};
void input(student*);
void output(student*);
int main()
{
	student s;
	input(&s);
	output(&s);
	return 0;
}
void input(student *p)
{
	cout<<"enter roll number :";
	cin>>p->rolno;
	cout<<"Enter marks  :";
	cin>>p->marks;
	cout<<"enter gpa :";
	cin>>p->gpa; //selsection operator
}
void output(student *m)
{
	cout<<"rollno:"<<m->rolno<<endl;
	cout<<"marks:"<<m->marks<<endl;
	cout<<"gpa:"<<m->gpa<<endl;
	
}
	
	

