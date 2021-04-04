// 3. Write a program which accept number from user and print its numbers line.
// Input : 4
// Output : -4 - 3 - 2 - 1 0 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
    int iStart = 0, iEnd = 0;
    if (iNo < 0)
    {
        iStart = iNo;
        iEnd = -iNo;
    }
    else
    {
        iStart = -iNo;
        iEnd = iNo;
    }
    while (iStart <= iEnd) {
        printf("%d\t", iStart);
        iStart++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}