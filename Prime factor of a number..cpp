#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number\n";
    cin>>x;

    cout<<"Prime factors of "<<x<<" are:\n";

    for(int i=2;i<=x;i++)
    {
        //checking for factor
        if(x%i==0)
        {
            //checking if i is prime or not
            int p = 0;
            for(int j=2;j<i;j++)
            {
              if(i%j==0)
              {
                //i is not prime
                p++;
                break;
              }
            }
            if(p==0)
            {
              //if p is 0
              //then i is prime
              cout<<i<<"\n";
            }
        }
    }
    return 0;
}
