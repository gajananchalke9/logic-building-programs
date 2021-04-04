// 1. Accept N numbers from user and return the largest number.

// Input : N : 6
// Elements : 85 66 3 66 93 88

// Output : 93



#include<stdio.h>
#include<stdlib.h>

int Maximum(int arr[], int iLength)
{
	if (iLength <= 0)
	{
		return -1;
	}

	int iMax = arr[0];

	for (int i = 1; i < iLength; i++)
	{
		if (iMax < arr[i])
		{
			iMax = arr[i];
		}
	}

	return iMax;
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
	iRet = Maximum(p, iSize);
	printf("Largest Number is %d\n", iRet);
	free(p);
	return 0;
}