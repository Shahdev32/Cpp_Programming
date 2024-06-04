#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

	/*
//char s[11];
char my_house[20]="Hi there";
char short_string []="abc";
char short_string []={'a','b','c'}// wrong method
//

int index=0;
while(our_string [index]!='/0')
{
	our_string [index]='x';
	index++;
	
}
//
a_string ="Hello ";


char a_string [11];
strcpy(a_string,"Hello iam good and how are you and what about you");
cout<<a_string;

char another_string [10];
char a_string_variable[10];
strncpy(another_stringa_string_varaible,9);
cout<<another_string<<a_strin g_variable;
*/
int main(int argc, const char * argv[])
{
    /* Create an example variable capable of holding 50 characters */
    char example[50];

    /* Copy 16 characters into the example variable
     from the string "TechOnTheNet.com knows strncpy" */
    strncpy (example, "TechOnTheNet.com knows strncpy!", 16);

    /* Add the required NULL to terminate the copied string */
    /* strncpy does not do this for you! */
    example[16] = '\0';

    /* Display the contents of the example variable to the screen */
    cout<<example;

    

system("pause") ;
return 0 ;
}


