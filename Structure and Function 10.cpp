#include <iostream>
using namespace std;

struct Student
{
    string name;
    int id;
    int mark[3];
};

void printStudent(const Student& c);
Student readStudent();

int main ()
{
    Student stu;
    Student stu2={ "Tom Hinks", 789000111, 88, 83, 81 };

    stu=readStudent();
    printStudent(stu);
    cout << endl << "Another Student:" <<endl;
    printStudent(stu2);

}

void printStudent(const Student& c)
{
    int i;

    cout << endl;
    cout << "Name: " << c.name << endl;
    cout << "ID: " << c.id << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Test " << i+1 << ": " << c.mark[i] << " " << endl;
    }
}
Student readStudent()
{
    int i;

    Student tempStu;
    cout << "Name?: ";
    getline(cin, tempStu.name);   // command to input a string
    cout << "ID?: ";
    cin >> tempStu.id;
    for (i = 0; i < 3; i++)
    {
        cout << "Test " << i+1 << "?: ";
        cin >> tempStu.mark[i];
    }
    return tempStu;
}

