#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*main-printing  the first program in C
*
*Description- writting a C program that prints
*Hello, World! as the C program input
*in one line and then outputs an input string:
*
*When the program is run, it will prompt the user to enter a *string. 
*After entering a string and pressing Enter-, 
*the program will print the following output:
*
*Return: 0 (program succesful)
*/
int main()
{
    //Printing Hello, World! on one line:
    printf("Hello, World!\n");

    //Calling the inputString:
    char s[100];
    scanf("%[^\n]%*c", s);
     
    //Printing the inputString:
    printf("Hello, World, %s\n",s);
    
    return 0;
}
