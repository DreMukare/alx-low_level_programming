# 0x15. C - File I/O

## 0. read_textfile

Reads a text file and prints it to the `POSIX` standard output

> - Letters is the number of letters it should read and print
> - Returns actual number of letters it could read and print
> - If file cannot be opened or read return `0`
> - If filename is `NULL` return `0`
> - If `write` fails or does not write expected amount of bytes return `0`

## 1. create_file

Creates a file

> - `filename` is the name of the file to create
> - Returns `1` on success, `-1` on failure
> - Created file must have `rw-------`, if file already exists permissions do not change
> - If file already exists it is truncated
> - If `filename` is `NULL` return `-1`
> - If `text_content` is `NULL` create an empty file

## 2. append_text_to_file

Appends text at the end of a file

> - `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file
> - Returns `1` on success and `-1` on failure
> - File is not created if it does not exist
> - If `filename` is `NULL` return `-1`
> - If `text_content` is `NULL` nothing is added to file, `1` is returned if file exists and `-1` if it does not exist or i do not have the required permissions to edit the file

## 3. file_from_file_to

Copies the contents of a file to another file
