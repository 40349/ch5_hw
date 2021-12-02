#include <stdio.h>
int main()
{
	char str[1000], rev[1000];
	int i, j, count = 0;
	scanf("%s", str);
	while (str[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	printf("String After Reverse:");
	for (i = 0; i < count; i++)
	{
		rev[i] = str[j];
		j--;
		printf("%c", rev[i]);
	}

	
}