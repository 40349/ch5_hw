#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int *aptr;
	a = 7;
	aptr = &a;
	printf("the address of a is %p\n", &a);
	printf("the value of *aptr is %d\n\n", *aptr);
	printf("the value of a is %d\nthe value of *aptr is %d\n\n", a, *aptr);
	printf("show that * and & are complements of each other\n");
	printf("&*aptr = %p\n*&aptr = %p\n", &*aptr, *&aptr);
}