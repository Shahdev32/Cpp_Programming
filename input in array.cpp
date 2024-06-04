#include<iostream>
using namespace std;
int main ()
{
	int number[3][4];
	cout<<"Enter the array element :";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>number[i][j];
		}
	}

cout<<"The numbers are :";
for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
         cout<<"number["<<i<<"]["<<j<<"]:"<<number[i][j]<<endl;
		}
	}



system("pause") ;
return 0 ;
}


