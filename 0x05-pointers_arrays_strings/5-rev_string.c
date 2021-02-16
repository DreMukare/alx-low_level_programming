#include "holberton.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
*
* Return: no return
*/
void rev_string(char *s)
{
	int i, j, k, tempVal;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;

	while (k < j)
	{
		tempVal = s[k];
		s[k] = s[j];
		s[j] = tempVal;
		k++;
		j--;
	}
}
