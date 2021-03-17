// 5.Write a program which accept number from user and count frequency of such a
// digits which are less than 6.

// Input : 2395
// Output : 3

// Input : 1018
// Output : 3

// Input : 9440
// Output : 3

// Input : 96672
// Output : 1

#include<stdio.h>
int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = CountFour(iValue);
    printf("Frequency of digits which are less than 6 is: %d", iRet);
    return 0;
}