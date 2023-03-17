#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the last random number
 * and if it is greater than 5, less than 6, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand((0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
