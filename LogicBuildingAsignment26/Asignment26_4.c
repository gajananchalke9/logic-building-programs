// Write a program which accept string from user and copy small
// characters of that string into another string.

// Input : "Marvellous multi OS"
// Output : "arvellous multi"

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
	// Fileter
	if (src == NULL) {
		return;
	}
	
	while (*src != '\0')
	{
		if (((*src >= 'a') && (*src <= 'z')) || *src == ' ' || *src == '\n' || *src == '\t')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
	return;
}
int main()
{
	char arr[30] = "Marvellous multi OS";
	char brr[30];
	// Empty string
	StrCpySmall(arr, brr);
	printf("%s", brr);
	// arvellous multi
	return 0;
}