#include<iostream>
using namespace std;
struct student{
	int rollno;
	float avg;
	char grade;
	
};
int main(){
	
  student s1;
  s1.rollno=12;
cout<<"<roll number is :"<<s1.rollno;
s1.avg=34.4;
cout<<"average is :"<<s1.avg;
s1.grade='A';
cout<<"grade is :"<<s1.grade<<endl;
}
