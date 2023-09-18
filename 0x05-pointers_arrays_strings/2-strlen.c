#include "main.h"
/**
 * _strlen - function name
 * @s; function parameter
 * Return; the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
{
	count++;
	s++;
}
return (count);
}
