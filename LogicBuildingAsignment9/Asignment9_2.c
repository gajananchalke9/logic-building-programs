// 2. Write a program which accept range from user and display all even numbers in
// between that range.

// Input : 24 35
// Output : 23 26 28 30 32 34

// Input : 10 18
// Output : 10 12 14 16 18

// Input : 10 10
// Output : 10

// Input : -10 2
// Output : -10 -8 -6 -4 -2 0 2

// Input : 90 18
// Output : Invalid range

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    if (iStart % 2 != 0)
    {
        iStart += 1;
    }
    for (iStart; iStart <= iEnd; iStart += 2)
    {
        printf("%d\t", iStart);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    RangeDisplayEven(iValue1, iValue2);
    return 0;
}