#include<iostream>
using namespace std;
int main ()
{

int x[2][3]={{2,3,4},{5,6,7}};
//array row 
for(int  i=0;i<2;i++)
{ //access colkoumn
	for(int j=0;j<3;j++)
	{
		cout<<"x["<<i<<"]["<<j<<"]="<<x[i][j]<<endl;
	}
}

system("pause") ;
return 0 ;
}


