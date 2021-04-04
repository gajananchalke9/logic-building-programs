// Write a program which accept string from user reverse that string
// in place.

// Input : "abcd"
// Output : "dcba"

// Input : "abba"
// Output : "abba"

#include <stdio.h>

void StrRevX(char *str)
{
    if (str == NULL) {
        return;
    }
    char *temp = str;

    while (*temp != '\0')
    {
        *temp++;
    }
    *temp--;
    while (str < temp)
    {
        char ch = *temp;
        *temp = *str;
        *str = ch;
        *temp--;
        *str++;

    }
}
int main()
{
    char arr[20];
    printf("Enter string");
    scanf("%[^\n]s", arr);

    StrRevX(arr);
    printf("Modified string is %s", arr);
    return 0;
}