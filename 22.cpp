#include<iostream>
using namespace std;
int add(int a,int b);//prototype



int main()
{
	int x=5;
	int y=7;
	int sum;
	sum=add(x,y);
	cout<<"sum is "<<sum<<endl;
	
}
int add(int a,int b)
{
	return (a+b);
	
}



