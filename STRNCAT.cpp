#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char dest[50] = "Using strncat function,";
    char src[50] = " this part is added and this is ignored";

    strncat(dest, src, 19);
    
    cout << dest ;

    return 0;

}

