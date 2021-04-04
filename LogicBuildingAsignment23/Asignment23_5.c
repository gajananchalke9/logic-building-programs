// Write a program which accept string from user and display it in
// reverse order.

// Input : "MarvellouS"
// Output : "SuollevraM"

#include <stdio.h>


void Reverse(char *str)
{
    if (str == NULL) {
        return;
    }

    int iLen = 0;
    while (*str != '\0')
    {
        iLen++;
        *str++;
    }
    
    *str--;

    while (iLen > 0)
    {
        printf("%c",*str);
        *str--;
        iLen--;
    }
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string");
    scanf("%[^\n]s", arr);
    Reverse(arr);
    return 0;
}
