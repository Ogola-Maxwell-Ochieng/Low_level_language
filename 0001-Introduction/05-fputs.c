#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
*main-entry point to C program:
*
*Decsription-Using fputs (file puts) to put a specified stream-
*the specified stream in this code is the stadard output-
*stream (file stream):
*
*Return:0 (always successful):
*/

int main()
{
    //Printing Hello, World:
    printf("Hello, World!\n");

    //Calling specified stream:
    fputs("Welcome to C programming.\n",stdout);

    //Return value:
    return 0;
}