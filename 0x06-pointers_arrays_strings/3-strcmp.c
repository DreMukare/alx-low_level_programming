#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: string to be compared to s2
* @s2: string to be compared to s1
*
* Return: returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
	int i, output;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
		if (*(s1 + i) != (*s2 + i))
			break;
	output = (*(s1 + i) - *(s2 + i));

	return (output);
}
