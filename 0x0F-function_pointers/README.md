# 0x0F. C - Function pointers

This repository explores the usages of pointers to functions.

## 0. print_name

Prints a name using callbacks

## 1. array_iterator

Executes a function given as a parameter on each element of the array

> - `size` is the size of the array
> - `action` is a pointer to the function needed to be used

## 2. int_index

Searches for an integer

> - `size` is the number of elements in the array `array`
> - `cmp` is a pointer to the function to be used to compare values
> - `int_index` returns the index of the first element for which the `cmp` function does not return `0`
> - if no element matches return `-1`
> - if `size` <= `0` return `-1`

## 3. A program that performs simple operations

The program prints te result of the operation followed by a new line
 > - The result of all operations can be stored in an int
 > - if number of args is wrong print `Error` followed by a new line and exit with status `98`
 > - if the `operator` is none of the ones provided print `Error` followed by a new line and exit with status `99`
 > - if the user tries to divide (`/` or `%`) by `0`, print `Error` followed by a new line and exit with status `100`

