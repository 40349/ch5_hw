#include<stdio.h>
#include<stdlib.h>
int cubeByValue(int n);
int main(void)
{
	int num = 5;
	printf("the original value of number is %d\n", num);
	num = cubeByValue(num);
	printf("the new value of number is %d\n", num);
}
int cubeByValue(int n)
{
	return n * n * n;
}