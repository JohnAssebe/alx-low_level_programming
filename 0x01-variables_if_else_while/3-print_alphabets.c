#include <stdio.h>

/**
 * main - print all character
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;


	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
