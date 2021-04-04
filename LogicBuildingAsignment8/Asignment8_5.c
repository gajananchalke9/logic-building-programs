// 5. Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 1;
    while (iCnt <= 5)
    {
        printf("%d\t", (iCnt * iNo));
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);
    MultipleDisplay(iValue);
    return 0;
}