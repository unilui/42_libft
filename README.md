# 42_Libft


![](banner.png)

## Summary:

* [Introduction](#introduction)
* [Subjects_studied](#subjects_studied)
* [Part_1](#part_1)
* [Part_2](#part_2)
* [Extras](#extras)
* [Makefile](#makefile)


## Introduction:
The aim of this project is to code a C library regrouping usual functions.
* **First part:** re-code a set of the libc functions, as defined in their man, with the same prototype and behaviors as the originals.
* **Second part:** code a set of functions that are either not included in the libc, or included in a different form.
* **Extras:** add any function to the 42_libft as I see fit.


## Subjects_studied:

⦿ Dinamic memory allocation.

⦿ Memory management.

⦿ Data structures.

⦿ Data types.

⦿ Variadic functions.

⦿ Static variables.

⦿ Header and Makefile.

⦿ Debugging with gdb and valgrind.

⦿ Flow program organization.

<hr />

### Part_1:

**ctype.h**

| Function | Description |
| --- | --- |
| [**ft\_isalpha**](https://github.com/unilui/42_libft/blob/master/ft_isalpha.c) | Checks for an alphabetic character.|
| [**ft\_isdigit**](https://github.com/unilui/42_libft/blob/master/ft_isdigit.c) | Checks for a digit (0 through 9).|
| [**ft\_isalnum**](https://github.com/unilui/42_libft/blob/master/ft_isalnum.c) | Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).|
| [**ft\_isascii**](https://github.com/unilui/42_libft/blob/master/ft_isascii.c) | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. |
| [**ft\_isprint**](https://github.com/unilui/42_libft/blob/master/ft_isprint.c) | Checks for any printable character including space.|
| [**ft\_toupper**](https://github.com/unilui/42_libft/blob/master/ft_toupper.c) | Convert lowercase letters to uppercase|
| [**ft\_tolower**](https://github.com/unilui/42_libft/blob/master/ft_tolower.c) | Convert uppercase letters to lowercase. |

**string.h**

| Function | Description |
| --- | --- |
| [**ft\_memset**](https://github.com/unilui/42_libft/blob/master/ft_memset.c) | Fills the first n bytes of the memory area pointed to by s with the constant byte c|
| [**ft\_bzero**](https://github.com/unilui/42_libft/blob/master/ft_bzero.c) | Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.|
| [**ft\_memcpy**](https://github.com/unilui/42_libft/blob/master/ft_memcpy.c) | Copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use  memmove(3)  if the memory areas do overlap.
| [**ft\_memmove**](https://github.com/unilui/42_libft/blob/master/ft_memmove.c) | Copies n bytes from memory area src to memory area dest. The two strings may overlap; the copy is always done in a non-destructive manner.|
| [**ft\_memchr**](https://github.com/unilui/42_libft/blob/master/ft_memchr.c) | Scans the initial n bytes of the memory area pointed to by s for the first instance of c.|
| [**ft\_memcmp**](https://github.com/unilui/42_libft/blob/master/ft_memcmp.c) | Compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.|
| [**ft\_strlen**](https://github.com/unilui/42_libft/blob/master/ft_strlen.c) | Computes and returns the length of the string s.|
| [**ft\_strlcpy**](https://github.com/unilui/42_libft/blob/master/ft_strlcpy.c) | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|
| [**ft\_strlcat**](https://github.com/unilui/42_libft/blob/master/ft_strlcat.c) | Appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|
| [**ft\_strchr**](https://github.com/unilui/42_libft/blob/master/ft_strchr.c) | Returns a pointer to the first occurrence of the character c in the string s.|
| [**ft\_chrpst**](https://github.com/unilui/42_libft/blob/master/ft_chrpst.c) | Returns the index of the first occurrence of the character c in the string s.|
| [**ft\_strrchr**](https://github.com/unilui/42_libft/blob/master/ft_strrchr.c) | Returns a pointer to the last occurrence  of the character c in the string s.|
| [**ft\_strnstr**](https://github.com/unilui/42_libft/blob/master/ft_strnstr.c) | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|
| [**ft\_strncmp**](https://github.com/unilui/42_libft/blob/master/ft_strncmp.c) | Lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strcmp**](https://github.com/unilui/42_libft/blob/master/ft_strcmp.c) | Lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_strdup**](https://github.com/unilui/42_libft/blob/master/ft_strdup.c) | Returns a pointer to a new string which is a duplicate of the string s.|

**stdlib.h**

| Function | Description |
| --- | --- |
| [**ft\_atoi**](https://github.com/unilui/42_libft/blob/master/ft_atoi.c) | Converts the initial portion of the string pointed to by str to int representation and returns the int. |
| [**ft\_calloc**](https://github.com/unilui/42_libft/blob/master/ft_calloc.c) | Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.|

<hr />

### Part_2:

**String's functions:**

| Function | Description |
| --- | --- |
| [**ft\_printf**](https://github.com/unilui/42_libft/tree/master/ft_printf) | Formats and prints its arguments, after the first, under control of the format.  The format is a character string which contains two types of objects: plain characters, which are simply copied to standard output and character escape sequences which are converted and copied to the standard output, each of which causes printing of the next successive argument.|
| [**ft\_substr**](https://github.com/unilui/42_libft/blob/master/ft_substr.c) | Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
| [**ft\_strjoin**](https://github.com/unilui/42_libft/blob/master/ft_strjoin.c) | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
| [**ft\_strtrim**](https://github.com/unilui/42_libft/blob/master/ft_strtrim.c) | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
| [**ft\_split**](https://github.com/unilui/42_libft/blob/master/ft_split.c) | Allocates and returns an array of strings obtained by splitting ’str’ using the character ’sep’ as a delimiter.|
| [**ft\_strmapi**](https://github.com/unilui/42_libft/blob/master/ft_strmapi.c) | Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.|
| [**ft\_striteri**](https://github.com/unilui/42_libft/blob/master/ft_strmapi.c) | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.|

**String to int:**

| Function | Description |
| --- | --- |
| [**ft\_itoa**](https://github.com/unilui/42_libft/blob/master/ft_itoa.c) | Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.|

**File-descriptor's functions:**

| Function | Description |
| --- | --- |
| [**ft\_putchar\_fd**](https://github.com/unilui/42_libft/blob/master/ft_putchar_fd.c) | Outputs the character ’c’ to the given file descriptor.|
| [**ft\_putstr\_fd**](https://github.com/unilui/42_libft/blob/master/ft_putstr_fd.c) | Outputs the string ’s’ to the given file descriptor.|
| [**ft\_putendl\_fd**](https://github.com/unilui/42_libft/blob/master/ft_putendl_fd.c) | Outputs the string ’s’ to the given file descriptor, followed by a newline.|
| [**ft\_putnbr\_fd**](https://github.com/unilui/42_libft/blob/master/ft_putnbr_fd.c) | Outputs the integer ’n’ to the given file descriptor.|

### Extras:

| Function | Description |
| --- | --- |
| [**get_next_line**](https://github.com/unilui/42_libft/blob/master/get_next_line.c) | Returns a line read from a file descriptor.|
| [**ft\_putchar**](https://github.com/unilui/42_libft/blob/master/ft_putchar.c) | Outputs the character c to the standard output.|
| [**ft\_putstr**](https://github.com/unilui/42_libft/blob/master/ft_putstr.c) | Outputs a string to the standard output.|
| [**ft\_putnbr**](https://github.com/unilui/42_libft/blob/master/ft_putnbr.c) | Outputs the integer n to the standard output.|
| [**ft\_sort\_int\_tab**](https://github.com/unilui/42_libft/blob/master/ft_sort_int_tab.c) | Sorts an array of integers by ascending order.|
| [**ft\_swap**](https://github.com/unilui/42_libft/blob/master/ft_swap.c) | Swaps the value of two integers whose addresses are entered as parameters.|

## Makefile:

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the master library file, "libft.a". |
| `make clean` | removes the .o files used to create the library. |
| `make fclean` | removes the .o & .a files used to create the library. |
| `make re` | removes all .o & .a files then remakes them. |

## Tests:

* [42_Libftest](https://github.com/jtoty/Libftest)
* [42_libft Unit tests](https://github.com/alelievr/libft-unit-test)
* [42_libft-war-machine](https://github.com/y3ll0w42/libft-war-machine)
* [42_libftTester](https://github.com/Tripouille/libftTester)
