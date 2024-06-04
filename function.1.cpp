#include<iostream>
using namespace std;
bool numner(int n1);
int main()
{
	int x;
	cout<<"Enter the number :";
	cin>>x;
	if(numner(x==1))
	cout<<"even number";
	else
	cout<<"odd numbr";
	
}
bool numner(int n1){
	int x;
	if(x%2==0)
	return 1;
	else
	return 0;
	
}
