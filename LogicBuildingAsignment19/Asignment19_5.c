// 5. Accept N numbers from user and accept one another number as NO ,
// return frequency of NO form it.

// Input : N : 6
// Elements : 15 66 3 70 10 88
// Output : 45

// Input : N : 6
// Elements : 44 66 72 70 10 88
// Output : 0


#include<stdio.h>
#include <stdlib.h>

int Product(int arr[], int iLength)
{
    if (arr == NULL || iLength <= 0)
    {
        return 0;
    }

    int iProduct = 0;
    for (int i = 0; i < iLength; ++i)
    {
        if (arr[i]%2 != 0)
        {
            if(iProduct == 0)
            {
                iProduct = 1;
            }
            
            iProduct *= arr[i];
        }
    }
    return iProduct;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);


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

    iRet = Product(p, iSize);

    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}