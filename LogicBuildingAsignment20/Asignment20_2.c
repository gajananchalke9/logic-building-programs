// 1. Accept N numbers from user and return the smallest number.

// Input : N : 6
// Elements : 85 66 3 66 93 88

// Output : 3



#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[], int iLength)
{
    if (iLength <= 0)
    {
        return -1;
    }

    int iMin = arr[0];

    for (int i = 1; i < iLength; i++)
    {
        if (iMin > arr[i])
        {
            iMin = arr[i];
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf(" %d", &iSize);

    if (iSize < 0) {
        printf("Invalid number of elements Input\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d: ", iCnt + 1);
        scanf(" %d", &p[iCnt]);
    }
    iRet = Minimum(p, iSize);
    printf("Smallest Number is %d\n", iRet);
    free(p);
    return 0;
}