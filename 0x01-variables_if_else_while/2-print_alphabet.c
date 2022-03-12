#include <stdio.h>

/**
 * main - prints lower letters
 * Return: 0(Sucess)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}	
	putchar('\n');
	return(0);
}
