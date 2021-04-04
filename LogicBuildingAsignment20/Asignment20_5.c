// Accept N numbers from user and display summation of digits of each number.

// Input : N : 6

// Elements : 8225 665 3 76 953 858

// Output : 17 17 3 13, 17, 21

#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[], int iLength)
{
    if (iLength <= 0)
    {
        return ;
    }

    for (int i = 0; i < iLength; i++)
    {
        int iSum = 0;
        int iNum = arr[i];

        while (iNum > 0)
        {
            int iDigit = iNum % 10;
            iNum = iNum / 10;
            iSum = iSum + iDigit;
        }

        printf("%d\t", iSum);
    }
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


    Digits(p, iSize);

    free(p);
    return 0;
}
