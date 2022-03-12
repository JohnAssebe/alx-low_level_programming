#include <stdio.h>

/**
 * main - prints elements of HexaDecimal
 * Return: 0(Sucess)
 */
int main(void)
{
	int ch;
	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
