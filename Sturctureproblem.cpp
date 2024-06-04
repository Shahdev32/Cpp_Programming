#include<iostream>
using namespace std;
struct stud //structure definition
 {
int rollno;
int marks;
char result[5]; //array within structure
} ;
int main() {
 stud studl={23, 85, "pass"}; //declaring and initializing
  //structure variable
  cout<<endl<<"Values of studl are: "<<endl;
  cout<< "Roll no.: "<<studl.rollno<<endl;
  cout<<"Marks: "<<studl.marks<<endl;
  cout<<"Result: "<<studl.result<<endl;
  return 0;
}
