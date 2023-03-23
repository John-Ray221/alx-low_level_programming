#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *@c: the char to be checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	int output;

	if (c >= 'A' && c <= 'Z')
	{
		output = 1;
	}
	else
	{
		output = 0;
	}
	return (output);
}
