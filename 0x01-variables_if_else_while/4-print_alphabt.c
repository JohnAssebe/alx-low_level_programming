#include <stdio.h>

/**
 * main - print alphabet except 'e' and 'q'
 * Return: 0 (Sucess)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			printf(ch);
	}
	printf('\n');
	return (0);
}
