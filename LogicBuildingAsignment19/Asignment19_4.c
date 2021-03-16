// 4. Accept N numbers from user and accept Range, 
// Display all elements from that range

// Input : N : 6
// Start: 60
// End : 90
// Elements : 85 66 3 76 93 88
// Output : 85 66 76 88

// Input : N : 6
// Start: 30
// End : 50
// Elements : 85 66 3 76 93 88
// Output : 

#include<stdio.h>
#include <stdlib.h>

void Range(int arr[], int iLength,  int iStartPoint, int iEndPoint)
{
    if (arr == NULL || iLength <= 0)
    {
        return 0;
    }

    for (int i = 0; i < iLength; ++i)
    {
        if (arr[i] <= iEndPoint && arr[i] >= iStartPoint)
        {
            printf("%d\t", arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iStartPoint = 0, iEndPoint = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point: ");
    scanf(" %d", &iStartPoint);

    printf("Enter the ending point: ");
    scanf(" %d", &iEndPoint);

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

    Range(p, iSize, iStartPoint, iEndPoint);

    free(p);
    return 0;
}