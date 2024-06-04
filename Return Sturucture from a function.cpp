#include<iostream>
using namespace std;
struct Book
{
	int page;
	float price;
	
};
Book check(Book x,Book y);
int main(){
	Book a,b ,r ;
	cout<<"Enter page and price"<<endl;
	cin>>a.page;
	cout<<"Enter page and price"<<endl;
	cin>>b.price;
	r=check(a,b);
	cout<<"The more costly book is :"<<endl;
	cout<<"Pages :"<<r.page<<endl;
	cout<<"Price :"<<r.price<<endl;
	return 0;
}
Book check(Book x,Book y)
{
	if(x.price>y.price)
	return x;
	else
	return y;
	
}
