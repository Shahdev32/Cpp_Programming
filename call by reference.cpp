#include<iostream>
using namespace std;
void change(int*);
int main()
{
	int x;
	x=7;
	change(&x);
	cout<<"the value of a is :"<<x<<endl;
	
}
void change(int *x)
{
	cout<<*x;
}


