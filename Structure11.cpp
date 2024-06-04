#include<iostream>
using namespace std;
struct student
{
	
	int roll_no;
	char name;
	int age;
	
};
int main ()
{
    Student stuArray[NUM_STU];
    int i;

    for (int i = 0; i<NUM_STU; i++)
    {
         stuArray[i]=readStudent();
         cin.ignore(256,'\n'); //why do this?
    }
    for (int i = 0; i<NUM_STU; i++)
    {
         printStudent(stuArray[i]);
    }
    return 0;
}
