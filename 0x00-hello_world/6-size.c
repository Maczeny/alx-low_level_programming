#include <stdio.h>
/**
 * main - A program that printss the size of various types on computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int x;
	float z;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
