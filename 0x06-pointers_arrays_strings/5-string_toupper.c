#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= '0' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
