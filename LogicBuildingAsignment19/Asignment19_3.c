// 3. Accept N numbers from user and accept one another number as NO ,
// return index of last occurrence of that NO.

// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : Last occurrence of number is 3

// Input : N : 6
// NO: 93
// Elements : 85 66 3 66 93 88
// Output : Last occurrence of number is 4

// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : There is no such number


#include<stdio.h>
#include <stdlib.h>



int LastOcc(int arr[], int iLength, int iNo)
{
    if (arr == NULL || iLength <= 0)
    {
        return 0;
    }
    int iPosition = -1;

    for (int i = 0; i < iLength; ++i)
    {
        if (arr[i] == iNo)
        {
            iPosition = i;
        }
    }

    return iPosition;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to find frequency of: ");
    scanf(" %d", &iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d :", iCnt + 1);
        scanf(" %d", &p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurrence of number is %d\n", iRet);
    }

    free(p);
    return 0;
}