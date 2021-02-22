#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* _putchar - writes the character c to stdout
*/
int _putchar(char c);

/**
* _memset - fills the first n bytes of the memory area pointed to by s 
* with the constant byte b
*/
char *_memset(char *s, char b, unsigned int n);

/**
* _memcpy - copies n bytes from memory area src to memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
* _strchr - returns a pointer to the first occurence of the character c
* in the string s or NULL if character not found
*/
char *_strchr(char *s, char c);

/**
* _strspn - returns the number of bytes in the initial segment of s
* which only consist of bytes from accept
*/
unsigned int _strspn(char *s, char *accept);

/**
* _strpbrk - searches a string for any set of bytes
*/
char *_strpbrk(char *s, char *accept);

/**
* _strstr - locates a substring
*/
char *_strstr(char *haystack, char *needle);

/**
* _chessboard - prints the chessboard
*/
void print_chessboard(char (*a)[8]);

/**
* print_diagsums - prints the sum of the two diagonals of 
* a square matrix of integers
*/
void print_diagsums(int *a, int size);

/**
* set_string - sets the value of a pointer to a char
*/
void set_string(char **s, char *to);

#endif /* HOLBERTON_H */
