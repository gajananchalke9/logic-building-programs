// Write a program which accept number from user and return difference between
// summation of all its factors and non factors

// Input : 12
// Output : -34        (16 - 50)

// Input : 10
// Output : -29        (8 - 37)

#include<stdio.h>
int FactDiff(int iNo)
{

    int iFact = 0, iNonFact = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0 && (i <= ((iNo / 2) + 1)))
        {
            iFact += i;
        }
        else
        {
            iNonFact += i;
        }
    }
    printf("iFact:%d & iNonFact:%d\n", iFact, iNonFact);
    return iFact - iNonFact ;
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