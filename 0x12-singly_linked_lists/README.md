# 0x12. C - Singly linked lists

This repository explores linked lists in C.

## 0. print_list

Function that prints all elemtns of a `list_t` list.

> - If `str` is `NULL` print `[0] (nil)`
> - Return the number of nodes

## 1. list_len

Returns the number of elements in a link `list_t` list

## 2. add_node

Adds a new node at the beginning of a `list_t` list

> - Returns address of the new element or `NULL` if it failed
> - `str` needs to be duplicated

## 3. add_node_end

Adds a new node at the end of a `list_t` list

> - Returns the address of the new element of `NULL` if it failed
> - `str` needs to be duplicated

## 4. free_list

Frees a `list_t` list
