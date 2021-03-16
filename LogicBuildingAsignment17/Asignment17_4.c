// 4. Accept N numbers from user and display all such elements which are divisible by 3 and 5.

// Input : N : 6
// Elements : 85 66 3 15 93 88
// Output : 15

#include<stdio.h>
#include <stdlib.h>


void Display(int arr[], int iLength)
{
    for (int i = 0; i < iLength; ++i)
    {
        if ((arr[i] % 5 == 0) && (arr[i] % 3 == 0) )
        {
            printf("%d\t", arr[i]);
        }
    }
}


int main()
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

    Display(p, iSize);

    free(p);
    return 0;
}