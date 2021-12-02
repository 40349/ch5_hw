#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int a, b,total;
	srand(time(NULL));
	int f[12] = { 0 };
	int i;
	for (i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		total = a + b;
		f[total-2]+=1;
	}
	for(i=0;i<11;i++)
	{
		printf("%d	%d\n", i+2, f[i]);
	}
	
}