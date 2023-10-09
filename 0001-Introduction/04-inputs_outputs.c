#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
*main- Taking character, string and sentenses:
*
*Dscription- Print three lines of output.
*The first line prints the character,
*The second line prints the string,
*The third line prints the sentence,
*
*Return:0 (always success):
*/

int main()
{
    //Declaring the character (ch),string(str) and sentence (sen):
    char ch;
    char str[100];
    char sen[100];

    //Calling the scanf function:
    scanf(" %c", &ch);
    scanf(" %s\n", str);
    scanf(" %[^\n]%*c",sen);

    //Printing out the outputs using the printf function:
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);

    //Return value:
    return 0;

}
