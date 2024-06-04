#include<iostream>
using namespace std;
void sum(int x,int y);
int main ()
{
	int a,b;
	cout<<"Enter two number :";
	cin>>a>>b;
	void sum(int ,int );//argument
	sum(a,b);//actual parameter
}
 void sum(int x,int y)// formal parameter
{
	int z;
	z=x+y;
	cout<<"Sum is "<<z<<endl;
}






