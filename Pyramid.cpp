#include<iostream>
using namespace std;
int main ()
  { int i,j,k;
  for(int i=1;i<=5;i++) //rows
  {
  	for(j=5;j>i;j--) //left side space
	  {
  		cout<<" ";
  		
	  }
	  for(k=1;k<=i;i++) //middle and right sidespace
	  {
	  	cout<<"*";
	  	
	  } 
	  cout<<endl;
  }



system("pause") ;
return 0 ;
}


