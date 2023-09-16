#include <stdio.h>


/**
 * main - program that prints single numbers starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
