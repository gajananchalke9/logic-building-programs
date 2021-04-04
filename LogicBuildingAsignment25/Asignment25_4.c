// Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.

// Input : "Marvellous Multi OS"
// 		 M
// Output : 11

// Input : "Marvellous Multi OS"
// 		 W
// Output : -1

// Input : "Marvellous Multi OS"
// 		 e
// Output : 4

#include <stdio.h>

int LastChar(char *str, char ch)
{
	int iCnt = 0, iLastFound = -1;
	while (*str != '\0') {
		iCnt++;
		if (*str == ch) {
			iLastFound = iCnt;
		}
		str++;
	}

	return iLastFound;
}
int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;
	printf("Enter string:");
	// scanf("%[^\n]s", arr);
	fgets(arr, 20, stdin);

	printf("Enter the character:");
	scanf(" %c", &cValue);

	iRet = LastChar(arr, cValue);
	printf("Character location is %d", iRet);
	return 0;
}