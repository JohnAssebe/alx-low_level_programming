#include <stdio.h>

/**
 * main - prints lower letters
 * Return: 0(Sucess)
 */
int main(void)
{
	int char;

	for (char = 'a'; char <= 'z'; char++)
	{
		putchar(char);
	}	
	putchar("\n");
	return(0);
}
