#include<iostream>
using namespace std;
struct Book
{
	char name[40];
	int  pages;
	int price;
	
};
int main()
{
	Book b1;
	Book *ptr;
	
	cout<<"Enter the book name :";
	cin.get(ptr->name,40);
	cout<<"Enter the pages :";
	cin>>ptr->pages;
	cout<<"Enter the price :";
	cin>>ptr->price;
	cout<<"=========================";
	cout<<"Book:"<<ptr->name<<endl;
	cout<<"Pages :"<<ptr->pages<<endl;
	cout<<"price:"<<ptr->price<<endl;
}

