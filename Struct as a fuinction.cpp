#include<iostream>
using namespace std;

struct person
{
 	char name[50];    //memebers
 	int age;
 	float salary;
 	
 };
 // decelaration
 void displaydata(person);
 
 int main(){
 	
 	person p1; //define 
 	cout<<"Enter full name :";
 	cin.get(p1.name,50);
 	cout<<"Enter the age :";
 	cin>>p1.age;
 	cout<<"Enter salary:";
 	cin>>p1.salary;
 	// function call with structure varaible as an argument 
 	displaydata(p1);
	 return 0;
	 }
	 void displaydata(person p1)
{
	cout<<"\n\nData Infromation :";
 	cout<<"Full name :"<<p1.name;
 	cout<<"Age is :"<<p1.age<<endl;
 	cout<<"salary :"<<p1.salary<<endl;
 }
 	
 	
 
