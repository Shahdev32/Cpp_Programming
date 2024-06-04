#include<iostream>
using namespace std;
void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	return ;
}
int main(){
	
int a=10;
int b=20;
cout<<a<<" "<<b;
swap(a,b);
cout<<a<<" "<<b;
return 0;
}
