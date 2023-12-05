// C Program to compare the following between two strings using String Library
// (i) String Comparison
// (ii) String Concatination
// (iii) String Reversal
// (iv) Length Comparison

#include <stdio.h>
#include <string.h>

int main()
{
    // Entering the value of both String
    char str1[100], str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    // String Comparison
    int str_compare = strcmp(str1, str2);

    // Length Comparison
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    // String Concatination
    strcat(str1, str2);

    printf("x---------------------------------------------x\n");

    // Checking the String Comparison and Printing
    if (str_compare == 0)
        printf("Both the Strings are same\n");
    else
        printf("Both the Strings are different\n");

    printf("x---------------------------------------------x\n");

    // Printing the concatination of both strings
    printf("The concatination of both Strings are: %s\n", str1);

    printf("x---------------------------------------------x\n");

    // Checking the Length of the String and Printing
    if (l1 == l2)
        printf("The length of both Strings are same\n");
    else
        printf("The length of both Strings are different\n");

    return 0;
}