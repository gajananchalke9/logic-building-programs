// 1.Write a program which accept number from user and return the count of even digits.

// Input : 2395
// Output : 1

// Input : 1018
// Output : 2

// Input : -1018
// Output : 2

// Input : 8462
// Output : 4


#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit%2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf(" %d", &iValue);

    iRet = CountEven(iValue);
    printf("Count of Even digits is: %d", iRet);
    return 0;
}