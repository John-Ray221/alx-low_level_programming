#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

int _isupper(int c)
{
	if (c > 95 && c < 122)
	{
		return (0);
	}
	else if (c > 65 && c < 90)
	{
		return (1);
	}
}
