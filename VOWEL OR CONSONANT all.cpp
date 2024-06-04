#include<iostream>
using namespace std;
int main (){
char n;
  cout<< "Input character : "; cin>>n;
  switch(n){
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
  cout<<n<< " vowel ."<<endl; break;
  case 'B':case 'b':case 'C':case 'c':case 'D':case 'd':
  case 'F':case 'f':case 'G':case 'g':case 'H':case 'h':
  case 'J':case 'j':case 'K':case 'k':case 'L':case 'l':
  case 'M':case 'm':case 'N':case 'n':case 'P':case 'p':
  case 'Q':case 'q':case 'R':case 'r':case 'S':case 's':
  case 'T':case 't':case 'V':case 'v':case 'W':case 'w':
  case 'X':case 'x':case 'Y':case 'y':case 'Z':case 'z':
  cout<<n<< " is consonant ."<<endl; break;
  }

  switch(n%2 ==0){
  case 0: cout<<n<< " is even"; break;
  case 1: cout<<n<< " is odd"; break;
  default:cout<<n<< " is simbol"<<endl; break;
  }
return 0;
}
