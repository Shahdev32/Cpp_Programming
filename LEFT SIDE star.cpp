#include<iostream>
using namespace std;
int main ()
{
  int i,j,k;
  for(i=1;i<=5;i++)
  { //row
  	for(j=i;j<5;j++){   //space
  		cout<<" ";	
	  }
	  
	  for(k=1;k<=i;k++){
	  	cout<<"*";
	  }
	  cout<<endl;
  }

return 0 ;
}


