#include<iostream>
using namespace std;
int fun(int &x,int &y){

int z = x;
x=y;
y=z;}
int main(){
	int fnumber=10;
	int senumber=20;
	cout<<fnumber<<" "<<senumber;
	cout<<"after swepping :";
	fun(fnumber,senumber);
	cout<<fnumber<<"  "<<senumber;
	
}


