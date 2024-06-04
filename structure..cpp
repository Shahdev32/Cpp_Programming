#include<iostream>
using namespace std;
struct student 
{
	int id;
	string name[50];
	int date_of_birth;
	int gpa;
	string dicipline;
		
};
int main()
{
	student s;
	cout<<"Enter the student name ";
	getline(cin,s.name[50]);
	cout<<"id is "<<s.name[50];
		
}
