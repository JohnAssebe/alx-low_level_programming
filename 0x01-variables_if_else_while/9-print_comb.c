#include <stdio.h>

/**
 * main - prints single digits separated by comma and space
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
        putchar('\n');
	return (0);

}
