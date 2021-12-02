#include<stdio.h>
#include<stdlib.h>
void cubeByAddress(int *nptr);
int main(void)
{
	int num = 5;
	printf("the original value of number is %d\n", num);
	cubeByAddress(&num);
	printf("the new value of number is %d\n", num);
}
void cubeByAddress(int *nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}