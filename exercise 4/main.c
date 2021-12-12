/*Name:Kaveh Masoudinia
Section 8 Exercise 4
Date:12/09/2021(1400/09/18)*/
#include <stdio.h>
#include <string.h>
int replace_first_x( char *inputstring, char *outstringA, char *outstringB )
{
    char *inout;

    inout = strchr(inputstring, 'x');
    while ( inout != NULL)
    {
        *inout = '1';
        strcpy(outstringA, inputstring );
        *inout = '0';
        strcpy(outstringB, inputstring);
        return 1;
    }
    return 0;
}
int show( char *string )
{
    char stringA[20], stringB[20];
    if ( replace_first_x(string, stringA, stringB) == 0 )
    {
        printf("%s\n", string);
        return 0;
    }
    show(stringB);
    show(stringA);
    return 0;
}
int main()

{
    char stri[20];
    int i;

    printf("Enter a number: ");
    fgets( stri, 20, stdin);

    show( stri );
}