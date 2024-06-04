
#include<iostream>
using namespace std;
int main ()
{            // Name: Shahdev 
             // CMS ID : 023-21-0130
             // Make a mark sheet? 
	int eng,math,physics,chemistry,biology ,obtMarks;
	cout<<"Enter Marks, Total marks are 100 for each subject"<<endl;
	cout<<"================================================="<<endl;
	cout<<"English :";
	cin>>eng;
	cout<<"Maths :";
	cin>>math;
	cout<<"Physics :";
	cin>>physics;
	cout<<"Chemistry:";
	cin>>chemistry;
	cout<<"Biology :";
	cin>>biology;
	
	obtMarks= eng+math+physics+chemistry+biology;
	
	
	
	system("cls");  //clear screen
	cout<<"===================================================="<<endl;
	cout<<"||              *Mark Sheet*                        ||"<<endl;
	cout<<"====================================================||"<<endl;
	cout<<"||  Name : Shahdev                                  ||"<<endl;
    cout<<"||  Father's name: Harsingh                         ||"<<endl;
	cout<<"||  District : Tharparkar                           ||"<<endl;
		
	cout<<"====================================================||"<<endl;
	cout<<"|| Subject || Total Marks || Obtained Marks         ||"<<endl;
	cout<<"|| English ||  100        ||   "<<eng<<"                   ||"<<endl;	
 	cout<<"|| Physics ||  100        ||   "<<physics<<"                    ||"<<endl;	
    cout<<"||Chemistry||  100        ||   "<<chemistry<<"                   ||"<<endl;	
    cout<<"|| math    ||  100        ||   "<<math<<"                     ||"<<endl;
	cout<<"||Total    ||  500        ||    "<<obtMarks<<"                 ||  "<<endl;
	cout<<"====================================================||"<<endl;
	
	cout<<"obtainmarks:"<<obtMarks<<endl;
	cout<<"Result =\t"<<"Pass\n";
	cout<<"\nGrade  =\t"<<"A";
		

	
		return 0;
}





