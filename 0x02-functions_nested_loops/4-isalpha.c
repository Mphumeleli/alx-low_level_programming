#include "main.h"

/**
 * isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter , 0 otherwise
 */

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
