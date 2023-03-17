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
	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 10)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
return (0);
}
