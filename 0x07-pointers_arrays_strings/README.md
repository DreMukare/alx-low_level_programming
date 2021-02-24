# 0x07. C - Even more pointers, arrays and strings

## 0. _memset

**Fills memory with a constant byte**

> - fills the first n bytes of the memory area pointed to by s with the constant byte b
> - Returns a pointer to the memory area s

## 1. _memcpy

**Copies memory area**

> - Copies `n` bytes from memory area `src` to memory area `dest`
> - Returns a pointer to `dest`

## 2. _strchr

**Locates a character in a string**

> - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

## 3. _strspn

**Gets the length of a prefix substring**

> - Returns the number of bytes in the initial segment of `s` which consists only of bytes from `accept`

## 4. _strpbrk

**Searches a string for any of a set of bytes**

> - Locates the first occurence of a string `s` of any of the bytes in the string `accept`
> - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

## 5. _strstr

**Locates a substring**

> -  finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
> - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

## 6. print_chessboard

**Prints the chessboard**

## 7. print_diagsums

**Prints the sum of the two diagonals of a square matrix of integers**

## 8. set_string

**Sets the value of a pointer to a char**
