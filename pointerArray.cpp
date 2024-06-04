#include<iostream>
using namespace std;
int main ()
{
//Relation b/w array and pointr;
//pointer also stores the address   of cells of arratys.
int*ptr;
int arr[2]={2,3};
//storesthe address of first ;
ptr=arr;//or ptr=&arr[0],same both 
//rest of address of element are &arr[1],&arr[2],&arr[3];
cout<<*ptr;




system("pause") ;
return 0 ;
}


