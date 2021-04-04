// Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).

// Input :
// "Marvellous Infosystems"
// "Logic Building"

// Output : "Marvellous Infosystems Logic Building"

#include <stdio.h>

void StrCatX(char *src, char * dest)
{
    // Filter
    if (src == NULL) {
        return;
    }
    // Traverse first string till end
    while (*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
    // Copy contents of destination in source
    while(*dest !=  '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    StrCatX(arr, brr);
    printf("%s", arr);
    // Marvellous Infosystems Logic Building
    return 0;
}