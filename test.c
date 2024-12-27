#include<stdio.h>
int main(void)
{
		printf("test.c");
		printf("This code was written on in the local before pulling");
		printf("This line was added after last action in the local");
		printf("test.c");
		printf("This code was written on in the local before pulling");
		printf("This line was added after last action in the local");
		printf("This line was added in the remote after the last action \n");
		printf("Line added after resolving conflicts before pushing\n");
		printf("\nThese were the contents present in the test.c file");
}
