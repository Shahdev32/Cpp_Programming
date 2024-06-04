#include<iostream>
using namespace std;
struct date
{
	int day;
	int month;
	int year;
	
};
struct phonebook
{
	char name[40];
	char city[40];
	long tel;
	date birthday;// nested strucutre
};
int main()
{
	phonebook a1;
	cout<<"Enter name :";
	cin>>a1.name;
	cout<<"Enter city:";
	cin>>a1.city;
	cout<<"Enter phone number :";
	cin>>a1.tel;
	cout<<"Enter date of birth (dd-mm-yy):";
	cin>>a1.birthday.day>>a1.birthday.month>>a1.birthday.year;
	cout<<"\nthe size of the strucutre variable is :"<<sizeof(a1);
	cout<<"\n the entry mode is :";
	cout<<a1.name<<"-"<<a1.city<<"-"<<a1.tel;
	cout<<a1.birthday.day<<" -"<<a1.birthday.month<<"-"<<a1.birthday.year;
	return 0;
}
	
	


