#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* _putchar - writes the character c to stdout
*/
int _putchar(char c);

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
* reverse_array - reverses the content of an array of integers
*/
void reverse_array(int *a, int n);

/**
* *string_toupper - changes all lowercase characters of a string to uppercase
*/
char *string_toupper(char *);

/**
* *capt_string - capitalizes all words of a string
*/
char *cap_string(char *);

/**
* *leet - encodes a string into 1337
*/
char *leet(char *);

/**
* *rot13 - encodes a string using rot13
*/
char *rot13(char *);

#endif /* HOLBERTON_H */
