# 0x14. C - Bit manipulation

## 0. binary_to_uint

Converts a binary number to an unsigned int

> - `b` points to a string of `0` and `1` chars
> - Returns the converted number of 0 if there is one of more chars in string `b` that are not `0` or `1` or `b` is `NULL`

## 1. print_binary

Prints the binary representation of a number

## 2. get_bit

Returns the value of a bit at a given index

> - `index` is the index starting from `0` of the bit you want to get
> - Returns the value of the bit at the index or `-1` if an error occurred

## 3. set_bit

Sets the value of a bit to `1` at a given index

> - Return `1` if it worked or `-1` if an error occurred

## 4. clear_bit

Sets the value of a bit to 0 at a given index

> - Return `1` if it worked or `-1` if an error occurred

## 5. flip_bits

Returns the number of bits you would need to flip to get from one number to another
