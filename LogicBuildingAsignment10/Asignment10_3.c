// 3. Accept number from user and display below pattern.
// Input : 5
// Output : 1  *  2  *  3  *  4  *  5  *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("%d\t*\t", iCnt );
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements:");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}