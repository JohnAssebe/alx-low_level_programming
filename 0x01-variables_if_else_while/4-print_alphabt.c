#include <stdio.h>

/**
 * main - print alphabet except 'e' and 'q'
 * Return: 0 (Sucess)
 */
int main
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
