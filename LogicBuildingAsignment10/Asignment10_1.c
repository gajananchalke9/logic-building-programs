// 1. Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E

#include<stdio.h>
void Pattern(int iNo)
{
    char ch = 'A';
    while (iNo > 0)
    {
        printf("%c\t", ch );
        ch++;
        iNo--;
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