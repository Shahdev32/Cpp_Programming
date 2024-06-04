#include<iostream>
using namespace std;
int main ()
{ char smallAlphabetcharacter,captialAlphabetcharacter;
cout<<"Enter the Alphabet character:";
cin>>smallAlphabetcharacter>>captialAlphabetcharacter;
switch(smallAlphabetcharacter&& captialAlphabetcharacter)
case a:case A :case e:case E:case i:case I:case o:case O:case u:case U:
	cout<<"Its a vowel";
	break;
	case :
		cout<<"its a consonant";
		break;
		


system("pause") ;
return 0 ;
}


