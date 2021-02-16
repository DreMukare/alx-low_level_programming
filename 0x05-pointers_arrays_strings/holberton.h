#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* _putchar - writes the character c to stdout
*/
int _putchar(char c);

/**
* reset_to_98 - updates value of into to 9
*/
void reset_to_98(int *n);

/**
* swap_int - swaps the values of two integers
*/
void swap_int(int *a, int *b);

/**
*  _strlen - returns the length of a string
*/
int _strlen(char *s);

/**
* _puts - prints a string followed by a new line to stdout
*/
void _puts(char *str);

/**
* print_rev - prints a string in reverse followed by a new line
*/
void print_rev(char *s);

/**
* rev_string - reverses a string
*/
void rev_string(char *s);

/**
* puts2 - prints every other character of a string starting with the first character
* followed by a new line
*/
void puts2(char *str);

/**
* puts_half - prints half of a string followed by a new line
*/
void puts_half(char *str);

/**
* print_array - prints n elements of an array of integers followed by a new line
*/
void print_array(int *a, int n);

/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte
* to the buffer pointed to by dest
*/
char *_strcpy(char *dest, char *src);

#endif /* HOLBERTON_H */
