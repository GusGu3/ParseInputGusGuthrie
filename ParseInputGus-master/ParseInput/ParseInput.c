#include <stdio.h>
#include <string.h>

/*
Name: Parse Input
Author: Gus Guthrie
Version: 4/9/2018
Description: A program which reads a string of inputted characters then tells the user the length of the string as well as the
            number of 0s and 1s.
*/

int main()
{
    /* Create array of characters */
    char input[BUFSIZ];
    int strLength; /* temporary int for the length of the string */
    int numZero = 0; /* int to record the number of zeros */
    int numOne = 0; /* int to record the number of ones */

    printf("Write a string of numbers and letters: \n");

    fgets(input, BUFSIZ, stdin);

    strLength = strlen(input) - 1; //-1 because it counts the \n which is automatically tacked on to the end of the string

    /* go through the string and count the 0s and 1s */
    int i;
    for (i = 0; i < strLength; i++)
    {
        //printf("$\n");
        if ( (char) input[i] == '0')
        {
            numZero++;
            //printf("zeros: %d", numZero);
        }//end if
        else if ( (char) input[i] == '1')
        {
            numOne++;
        }//end else if
    }//end for

    /* print the list size and the number of 0s and 1s */
    printf("The list size is: %d. \nThe number of zeros is: %d. \nThe number of ones is: %d.", strLength, numZero, numOne);

    return 0;

}//end main
