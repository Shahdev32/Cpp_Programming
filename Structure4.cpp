#include<iostream>
using namespace std;

struct complex
{

  int real;
  int imag;
};

struct complex add(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real+b.real;
  d.imag = a.imag+b.imag;
  return d;
}

struct complex sub(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real-b.real;
  d.imag = a.imag-b.imag;
  return d;
}

struct complex multiply(struct complex a, struct complex b)
{
  struct complex d;
  d.real = (a.real*b.real)-(a.imag*b.imag);
  d.imag = (a.real*b.imag)+(a.imag*b.real);
  return d;
}

int main()
{ 
  struct complex d1 = {12,2};
  struct complex d2 = {14,11};

  struct complex d = add(d1,d2);
  struct complex e = sub(d1,d2);
  struct complex f = multiply(d1,d2);

  cout << "ADD - " << d.real << "+" << d.imag << "i\n";
  cout << "SUB - " << e.real << "+" << e.imag << "i\n";
  cout << "MUL - " << f.real << "+" << f.imag << "i\n";

  return 0;
}
 
