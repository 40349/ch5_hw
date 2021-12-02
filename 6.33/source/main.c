#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int key, a[10], i, j, tmp;;
	printf("input 10 numbers:");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("key:");
	scanf_s("%d", &key);
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	if (key > a[4])
	{
		if (key > a[7])
		{
			if (key == a[8])
			{
				printf("%d at a[8]", key);
			}
			else if (key == a[9])
			{
				printf("%d at a[9]", key);
			}
		}
		if (key == a[7])
		{
			printf("%d at a[7]", key);
		}
		if (key < a[7])
		{
			if (key = a[5])
			{
				printf("%d at a[5]", key);
			}
			else if (key == a[6])
			{
				printf("%d at a[6]", key);
			}
		}
	}
	else if (key <= a[4])
	{
		if (key > a[2])
		{
			if (key == a[3])
			{
				printf("%d at a[3]", key);
			}
			else if (key == a[4])
			{
				printf("%d at a[4]", key);
			}
		}
		if (key == a[2])
		{
			printf("%d at a[2]", key);
		}
		if (key < a[2])
		{
			if (key = a[1])
			{
				printf("%d at a[1]", key);
			}
			else if (key == a[0])
			{
				printf("%d at a[0]", key);
			}
		}
	}
	else
	{
		printf("no found");
	}
}
