// C Program to compare the following between two strings using Array
// (i) String Comparison
// (ii) String Concatination
// (iii) String Reversal
// (iv) Length Comparison

#include <stdio.h>
#include <string.h>

// Function to calculate the length of the String
int str_length(char str[])
{
    int i, length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

// Function to calculate the reverse of the String
char str_reverse(char str[])
{
    int i, j;
    char temp;
    int length = str_length(str);
    j = length - 1;
    for (i = 0; i <= j; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    return str;
}

int main()
{
    // Entering the value of both String
    char str1[100], str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    int length_str1 = str_length(str1);
    int length_str2 = str_length(str2);

    printf("x---------------------------------------------x\n");

    // String Comparison
    int str_com = 0;
    if (length_str1 == length_str2)
    {
        for (int i = 0; i < length_str1; i++)
        {
            if (str1[i] == str2[i])
                str_com++;
            else
            {
                printf("Both the Strings are different\n");
                break;
            }
        }
        if (str_com == length_str1)
            printf("Both the Strings are same\n");
    }
    else
        printf("Both the Strings are different\n");

    printf("x---------------------------------------------x\n");

    // String Concatination
    int dlength_str1 = length_str1;
    char dstr1[100];
    strcpy(dstr1, str1);
    for (int i = 0; i < length_str2; i++)
    {
        dstr1[dlength_str1] = str2[i];
        dlength_str1++;
    }
    printf("The concatination of both Strings: %s\n", dstr1);

    printf("x---------------------------------------------x\n");

    // Length Comparison
    if (length_str1 == length_str2)
        printf("The length of both Strings are same\n");
    else
        printf("The length of both Strings are different\n");

    printf("x---------------------------------------------x\n");

    // String Reversal
    str_reverse(str1);
    str_reverse(str2);
    printf("The Reversed Strings: \n");
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}