#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* _putchar - writes the character c to stdout
*/
int _putchar(char c);

/**
* _islower - checks for lowercase character
*/
int _islower(int c);

/**
* _isalpha - checks for alphabetic character
*/
int _isalpha(int c);

/** 
* _abs - computes absolute value of integer
*/
int _abs(int n);

/**
* _isupper - checks for uppercase character
*/
int _isupper(int c);

/**
* _isdigit - checks for digit (0 through 9
*/
int _isdigit(int c);

/**
*  _strlen - returns the length of a string
*/
int _strlen(char *s);

/**
* _puts - prints a string followed by a new line to stdout
*/
void _puts(char *s);

/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte
* to the buffer pointed to by dest
*/
char *_strcpy(char *dest, char *src);

int _atoi(char *s);

/**
* *_strcat - concatenates two strings
*/
char *_strcat(char *dest, char *src);

/**
* *_strncat - concatenates two strings
*/
char *_strncat(char *dest, char *src, int n);

/**
* *_strncpy - copies a string
*/
char *_strncpy(char *dest, char *src, int n);

/**
* _strcmp - compares two strings
*/
int _strcmp(char *s1, char *s2);

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

#endif /* HOLBERTON_H */
