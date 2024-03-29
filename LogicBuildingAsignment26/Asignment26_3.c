// Write a program which accept string from user and copy capital
// characters of that string into another string.

// Input : "Marvellous Multi OS"
// Output : "MMOS"


void StrCpyCap(char *src, char *dest)
{
	// Fileter
	if (src == NULL) {
		return;
	}
	while (*src != '\0')
	{
		if ((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *dest;
			dest++;
		}
		src ++;
	}
	*dest = '\0';
	return;
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30];
	// Empty string
	StrCpyCap(arr, brr);
	printf("%s", brr);
	// MMOS
	return 0;
}