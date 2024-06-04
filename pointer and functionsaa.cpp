#include<iostream>
using namespace std;

void exchange (int*,int*);
int main()
{
	int n1,n2;
	cout<<"Enter two integers :";
	cin>>n1>>n2;
	cout<<"values before swapping :\n";
	cout<<"n1="<<n1<<endl;
	cout<<"n2="<<n2<<endl;
	exchange(&n1,&n2);
	cout<<"values Ater swapping :\n";
	cout<<"n1="<<n1<<endl;
	cout<<"n2="<<n2<<endl;
	return 0;	
}
void exchange(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	
}


