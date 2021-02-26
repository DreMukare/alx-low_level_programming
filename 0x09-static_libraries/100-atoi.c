#include "holberton.h"

/**
* _atoi - converts string to integer
* @s: string to be converted
*
* Return: return integer
*/
int _atoi(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] > '9' || s[i] < '0')
			return (-1);
		res = res * 10 + s[i] - '0';
	}
	return res;
}
