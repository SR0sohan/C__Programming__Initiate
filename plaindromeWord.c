#include <stdio.h>
#include <string.h>
// Solved with string functions
int isPalindrom(char num[21])
{
    char BeforeRev[21], AfterRev[21], compare;
    strcpy(BeforeRev, num);
    strcpy(AfterRev, strrev(num));
    compare = strcmp(BeforeRev, AfterRev);
    printf("The number you have entered is = %s\n", BeforeRev);
    printf("Number after reversal = %s\n", AfterRev);
    switch (compare)
    {
    case 0:
        printf("\n~~***~~This number is a palindrome~~***~~\n\n");
        break;
    default:
        printf("\nThis number is not a palindrom\n");
        break;
    }
}
int main()
{
    char number[21];
    printf("Enter a number to check whether it is a palindrom or not\n");
    scanf("%s", &number);
    isPalindrom(number);
    return 0;
}