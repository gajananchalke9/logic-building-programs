// 4. Accept number of rows and number of columns from user and display below
// pattern.
// Input :
// iRow = 6    iCol = 5

// Output :
//     *   *   *   *   *
//     *   @   @   @   *
//     *   @   @   @   *
//     *   @   @   @   *
//     *   @   @   @   *
//     *   *   *   *   *


#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	for (int i = 0; i < iRow; ++i)
	{
		for (int j = 0; j < iCol; ++j)
		{
			if ((i > 0 && i < (iRow - 1)) && (j > 0 && j < (iCol - 1)) )
			{
				printf("@\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns");
	scanf(" %d %d", &iValue1, &iValue2);
	Pattern(iValue1, iValue2);
	return 0;
}

