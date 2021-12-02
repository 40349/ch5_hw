#include<stdio.h>
#include<stdlib.h>
int m = 0;
int recursiveMax(int a[], int s)
{
	if (s == 0)
	{
		return m;
	}
	if (a[s] >= m)
	{
		m = a[s];
	}
	return recursiveMax(a, s - 1);
}
int main()
{
	int i;
	int a[10] = { 1,3,66,2,4,88,123,62,434,3430 };
	printf("array:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nmax:%d", recursiveMax(a, 9));
}