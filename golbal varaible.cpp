#include<iostream>
using namespace std;
int fun(int x);
int var =10;
int main(){
	int x=3;
	fun(x);
	return 0;
}
int fun(int x){
	cout<<x;
}
