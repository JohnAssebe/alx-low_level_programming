#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: c -  Variable
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		printf ("%c %d",c,1);
	}
	else
	{
             printf("%c %d",c,0);	
	}
	return (0);
}
