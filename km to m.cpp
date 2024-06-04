#include<iostream>

using namespace std;

int main()
{
	float millimeter, centimeter, meter, kilometer;
	
	cout << "\nPlease Enter the Length in Kilometers (km)  =  ";
	cin >> kilometer;
	
	meter = kilometer * 1000.0;
  	centimeter = kilometer * 100000.0; 	
  	millimeter = kilometer * 1000000.0; 	
	
	cout << kilometer << " Kilometers  = " << meter << " Meters" << endl;
	cout << kilometer << " Kilometers  = " << centimeter << " Centimeters" << endl;
	cout << kilometer << " Kilometers  = " << millimeter << " Millimeters";
	
 	return 0;
}

