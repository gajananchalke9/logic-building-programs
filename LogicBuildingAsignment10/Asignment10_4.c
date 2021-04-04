// 4. Accept number from user and display below pattern.
// Input : 4
// Output : #  1  *  #  2  *  #  3  *  #  4  *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("#\t%d\t*\t", iCnt );
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}