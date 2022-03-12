#include <stdio.h>

/**
 * main - displays a single digit in putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;
	for (ch = 48; ch<58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

}
