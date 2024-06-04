#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    double numbers[] = {7, 5, 6, 12, 35, 27};

    double sum = 0;
    double count = 6
	;
    double average;

    cout << "The numbers are: ";
    for(int i=0;i<6;i++){
    	cout<<numbers[i];
        sum+=numbers[i];
}

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}
