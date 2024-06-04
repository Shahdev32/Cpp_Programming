#include<iostream>
using namespace std;
int main ()
{

    int n, i, arr[50], j, temp;
    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
/*
f user enters the size of array as 5, and its elements as 5, 1, 4, 2, 3, then dry run of above program goes like:

Because size is 5. Therefore, n=5
And all the 5 elements gets initialized to the array arr[] in a way that arr[0]=5, arr[1]=1, arr[2]=4, arr[3]=2, and arr[4]=3
Now using for loop, initially i=0 and checks the condition, whether it is less than n-1 or not
Because the condition (i<(n-1) or 0<(5-1) or 0<4) evaluates to be true, therefore program flow goes inside the loop
Inside the loop, there is another for loop, and there j=0 (initially) and the condition j<(n-i-1) or j<(5-0-1) or j<4 evaluates to be true. Therefore program flow goes inside this loop
And checks the condition of if block, that is arr[j]>arr[j+1] or arr[0]>arr[1] or 5>1 evaluates to be true, therefore program flow goes inside the if block and executes all the three statements
After executing all the three statements, the element at index number j gets swapped with element at index number j+1
Now arr[0]=1 and arr[1]=5 and rest of the three elements will be at same index.
Now program flow goes to the updatation part of the inner for loop and increments the value of j. Now j=1
Again checks the condition, that is j<(n-i-1) or 1<(5-0-1) or 1<4 evaluates to be true, therefore program flow again goes inside the loop and checks the condition of if block
If the condition evaluates to be true, then process the three statements, otherwise update the value of j and checks the condition
Continue the process in similar with updated value, until the condition of outer for loop evaluates to be false.
If the condition of outer for loop evaluates to be false, then program flow exits the loop
Now the array arr[] gets sorted, just print it
*/

