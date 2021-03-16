// 5.Write a program which accept number from user and return difference between
// summation of all its factors and non factors.

// Input : 12
// Output : -34 (16 - 50)

// Input : 10
// Output : -29 (8 - 37)


#include<stdio.h>
int FactDiff(int iNo)
{
    int iSumNonFactor = 0,iSumFactor = 0, i = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i < iNo; ++i)
    {
        if (iNo % i != 0)
        {
            iSumNonFactor = iSumNonFactor + i;
        }
        else 
        {
            iSumFactor = iSumFactor + i;
        }
    }

    return (iSumFactor - iSumNonFactor);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf(" %d", &iValue);
    iRet = FactDiff(iValue);
    printf(" %d", iRet);
    return 0;
}