#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    double numbers[] = {7, 5, 6, 12, 35, 27};
   
    double sum = 0;
    double count ;
    double average;

    cout << "The numbers are: ";

    //  print array elements
    // use of range-based for loop
    for(int i=1;i<6;i++) {
        cout<<numbers[i]<< "  ";

        //  calculate the sum
        sum +=numbers[i];

        
    }

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / 6;
    cout << "Their Average = " << average << endl;

    return 0;
}

