# 0x0B. C - malloc, free

## 0. create_array

**creates an array of chars, and initializes it with a specific char**

> - Returns `NULL` if size == `0`
> - Returns a pointer to the array, or `NULL` if it fails

## 1. _strdup

**returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter**

> - The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc` and can be freed with `free`.
> - Returns `NULL` if str == `NULL`
> - On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.

## 2. str_concat

**Concatenates two strings**

> - The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.
> - if `NULL` is passed, treat it as an empty string
> - The function should return `NULL` on failure

## 3. alloc_grid

**returns a pointer to a 2 dimensional array of integers.**

> - Each element of the grid should be initialized to `0`
> - The function should return `NULL` on failure
> - If `width` or `height` is `0` or negative, return `NULL`

## 4. free_grid

**frees a 2 dimensional grid previously created by your `alloc_grid` function**

## 5. argstostr

**concatenates all the arguments of my program**

> - Returns `NULL` if `ac == 0` or `av == NULL`
> - Returns a pointer to a new string, or `NULL` if it fails
> - Each argument should be followed by a `\n` in the new string
