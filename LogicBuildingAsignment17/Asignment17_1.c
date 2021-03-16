// 1. Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements.

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181)

#include <stdio.h>
#include<stdlib.h>


int Difference(int arr[], int iLength)
{
    int iSumOdd = 0, iSumEven = 0, i = 0;

    for (i = 0; i < iLength; i++)
    {
        if (arr[i] % 2 == 0)
        {
            iSumEven += arr[i];
        }
        else
        {
            iSumOdd += arr[i];
        }
    }
    printf("iSumEven:%d And iSumOdd: = %d\n", iSumEven, iSumOdd);

    return (iSumEven - iSumOdd);
}


int main(int argc, char const *argv[])
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d :", iCnt + 1);
        scanf(" %d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d", iRet);

    free(p);
    return 0;
}