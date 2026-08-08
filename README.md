*This project has been created as part of the 42 curriculum by \<nilim>*

# Description
Libft aims to teach the student the underlying principles of commonly-used C functions via reimplementation. The DIY library will be used in future assigments and projects, allowing the student to savour the fruits of their labours.

# Instructions
A Makefile is included for compiling the library.

Standard commands (Usage: make *command*):
- all(default): compiles the object files, create and insert objects into libft.a
- clean: removes all object files
- fclean: removes the object files and libft.a
- re: updates the library and objects by removing them and recompiling and archiving again

Extra commands for the test folder Makefile:
- nodebug: compile the test program without debugging flags, -fsanitize=address and -g are included by default
- lib: run make all in the previous directory, effectively recompiling libft.a
- libclean: remove libft.a in the previous directory

# Libft
Other than non-standard functions, certain functions from standard libraries are also reimplemented in this library.

***All functions are prefixed with 'ft_'***

## <ctype.h>
- isalnum, isalpha, isascii, isdigit, isprint

	Checks if the char *c* passed in are the specified classes

- toupper, tolower

	If char *c* is an alphabet, converts it from lowercase to uppercase and vice versa; else, it returns *c*

## <string.h>
- bzero, memset

	Sets *n* bytes starting from the address *s* into:
	- 0 bytes (bzero)
	- specified *c* bytes (memset)

- memcpy, memmove

	Copies *n* bytes from memory area *src* to memory area *dst*.<br>
	Memory areas can overlap for *memmove* but not for *memcpy*

- memchr

	Returns a pointer the first occurence of byte *c* in the initial *n* bytes of *s*

- memcmp

	Compares the initial *n* bytes of memory areas *s1* and *s2* and returns the difference or 0 if there are none

- strlen

	Returns the length of NUL-terminated string *s* passed into the function excluding '\0'

- strlcpy, strlcat

	*strlcpy* copies up to *size - 1* chars from the NUL-terminated string *src* to *dest*<br>
	*strlcat* appends at most *size - strlen(dst) - 1* chars of *src* to *dst*<br>
	The resultant strings will always be NUL-terminated<br>
	The value returned is the total length of the string that they tried to create.

	> If RV >= size passed, it means truncation occured on *src*.

- strchr, strrchr

	Both functions returns a pointer to an occurence of char *c* in the NUL-terminated string *s*<br>
	*strchr* returns the first occurence; *strrchr* returns the last

- strncmp

	Compares the initial *n* chars of NUL-terminated strings *s1* and *s2* and returns the difference or 0 if there are none

- strnstr

	Returns a pointer to the first occurence of substring *little* in the initial *n* chars of NUL-terminated string *big*

- strdup

	Returns a pointer to a new duplicated string of the NUL-terminated string *s*

## <strlib.h>
- atoi

	Converts the initial portion of the NUL-terminated string *nptr* that are digits to int and returns that value

- calloc

	allocates memory for an array of *n* elements of *size* bytes each and sets it to 0<br>
	Returns a pointer to the allocated memory

## <libft.h>
- substr

	Allocates memory and returns a substring from the string *s*<br>
	The substring starts at index *start* and has a max length of *len*

- strjoin

	Allocates memory and returns a new string, which is a concatenation of strings *s1* and *s2*

- strtrim

	Allocates memory and returns a copy of string *s1* with characters from *set* removed from the beginning and the end

- split

	Allocates memory and returns an array of strings obtained by splitting *s* using the character *c* as a delimiter<br>
	The array must end with a NULL pointer

- itoa

	Allocates memory and returns a string representing the integer *n*

- strmapi

	Applies the function *f* to each character of the string *s*<br>
	A new string is created with malloc to store the results from the successive applications of *f*

- striteri

	Applies the function *f* to each character of the string *s*<br>
	Each character is passed by address to *f* so it can be modified if necessary.

- putchar_fd

	Outputs the character *c* to the specified file descriptor *fd*

- putstr_fd

	Outputs the string *s* to *fd*

- putendl_fd

	Outputs the string *s* to *fd* followed by a newline

- putnbr_fd

	Outputs the integer *n* to *fd*

### Linked list handling

A linked list node is defined as:
```c
typedef struct		s_list
{
	void			*content;
	struct s_list	*nest;
}					t_list;
```
- lstnew

	Allocates memory and returns a new node. The *content* member variable is initialized with the given parameter<br>
	The variable *next* is initialized to NULL

- lstadd_front

	Adds the node *new* at the beginning of the list

- lstsize

	Returns the number of nodes in the list

- lstlast

	Returns a pointer to the last node of the list

- lstadd_back

	Adds the node *new* at the end of the list

- lstdelone

	Frees the content of the node pointer *lst* using the function *del* and frees the node itself

- ltsclear

	Deletes and frees the given node and all its successors using the function *del* and free<br>
	Sets the pointer to the list to NULL

- lstiter

	Iterates through *lst* and applies the function *f* to the content of each node

- lstmap

	Iterates through *lst*, applies function *f* to the content of each node and creates a new list with the altered content<br>
	The function *del* is used to delete the content of a node if needed

# Resources

1. man-db 2.13.1
2. <a href="https://pubs.opengroup.org/onlinepubs/9799919799/" target="_blank">The Open Group Base Specifications</a>
3. <a href="https://stackexchange.com/" target="_blank">Stack Exchange</a>
4. 42KL peers

<!--
Good error colors
rgba(113, 110, 110, 0.53)
rgba(180, 60, 0, 0.53)
-->