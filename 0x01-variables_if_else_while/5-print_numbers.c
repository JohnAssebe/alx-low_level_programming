#include <stdio.h>

/**
 *  main - prints all single digits
 *  Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
