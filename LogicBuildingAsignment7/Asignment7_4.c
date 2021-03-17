// 4.Write a program which accept number from user and return multiplication of all digits.

// Input : 2395
// Output : 270

// Input : 1018
// Output : 8

// Input : 9440
// Output : 144

// Input : 922432
// Output : 864

#include<stdio.h>
int MultDigits(int iNo)
{
    int iDigit = 0, iMultiplication = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMultiplication = iMultiplication * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMultiplication;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf(" %d", &iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of all digits is: %d", iRet);
    return 0;
}