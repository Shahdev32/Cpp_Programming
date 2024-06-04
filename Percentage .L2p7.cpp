#include<iostream>
using namespace std;
int main ()
{ int eng,math,phy,chem,bio,totalmarks;
float obtmarks,per;

cout<<"Enter english marks:"<<endl;
cin>>eng;
cout<<"Enter math marks:"<<endl;
cin>>math;
cout<<"Enter physics marks:"<<endl;
cin>>phy;
cout<<"Enter Chemistry marks:"<<endl;
cin>>chem;
cout<<"Enter biology marks:"<<endl;
cin>>bio;
cout<<"Enter your total marks :";
cin>>totalmarks;
obtmarks=eng+math+phy+chem+bio;
per=(obtmarks/totalmarks)*100.0;
cout<<"percentage is :"<<per<<endl;



system("pause") ;
return 0 ;
}


