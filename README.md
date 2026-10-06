*This project has been created as part of the 42 curriculum by <dbustama>*

# Libft

## Description
**Libft** is a custom C library developed as the first individual project in the 42 curriculum. Its main goal is to re-implement standard C library (`libc`) functions, as well as to develop additional utility functions for memory management, string manipulation, and linked list handling. This library serves as a foundational toolkit to be reused in future projects throughout the cursus.

## Library Functions

### Part 1: Libc Functions
Re-implementation of standard functions from `<string.h>`, `<stdlib.h>`, and `<ctype.h>` without relying on external function dependencies.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks if the character is alphabetic. |
| `ft_isdigit` | Checks if the character is a decimal digit (0-9). |
| `ft_isalnum` | Checks if the character is alphanumeric. |
| `ft_isascii` | Checks if the character fits in the ASCII character set (0-127). |
| `ft_isprint` | Checks if the character is printable. |
| `ft_strlen` | Computes the length of a string. |
| `ft_memset` | Fills a block of memory with a specific byte value. |
| `ft_bzero` | Writes zeroes (`\0` bytes) to a byte string. |
| `ft_memcpy` | Copies a memory area to another (non-overlapping areas). |
| `ft_memmove` | Copies a memory area to another, properly handling overlapping regions. |
| `ft_strlcpy` | Copies a string to a specific buffer size securely. |
| `ft_strlcat` | Appends a string to a buffer of a specific size. |
| `ft_toupper` | Converts a character to uppercase. |
| `ft_tolower` | Converts a character to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to $n$ characters. |
| `ft_memchr` | Scans a memory block for a specific byte. |
| `ft_memcmp` | Compares two memory blocks byte by byte. |
| `ft_strnstr` | Locates a substring in a string, searching no more than $n$ characters. |
| `ft_atoi` | Converts a string representation of an integer into an integer value. |
| `ft_calloc` | Allocates memory for an array and initializes all bytes to zero. |
| `ft_strdup` | Duplicates a string using dynamically allocated memory (`malloc`). |

---

### Part 2: Additional Functions
Utility functions that are either absent from standard `libc` or implemented with specific signature changes to assist in string manipulation and file descriptor outputs.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Extracts a substring from string `s` starting at index `start` with maximum length `len`. |
| `ft_strjoin` | Allocates and returns a new string resulting from concatenating `s1` and `s2`. |
| `ft_strtrim` | Trims specified characters in `set` from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of substrings using a character delimiter `c`. |
| `ft_itoa` | Converts an integer value into a null-terminated string. |
| `ft_strmapi` | Applies function `f` to each character of string `s` to create a new string. |
| `ft_striteri` | Applies function `f` to each character of string `s`, passing its index and pointer address. |
| `ft_putchar_fd` | Outputs character `c` to the given file descriptor. |
| `ft_putstr_fd` | Outputs string `s` to the given file descriptor. |
| `ft_putendl_fd` | Outputs string `s` to the given file descriptor followed by a newline. |
| `ft_putnbr_fd` | Outputs integer `n` to the given file descriptor. |

---

### Part 3: Linked Lists
Mandatory functions designed to manipulate nodes and handle singly linked list operations using the `t_list` structure.

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Allocates and returns a new node with `content` set and `next` set to `NULL`. |
| `ft_lstadd_front` | Adds node `new` at the beginning of the list. |
| `ft_lstsize` | Counts the total number of nodes in a list. |
| `ft_lstlast` | Returns a pointer to the last node of a list. |
| `ft_lstadd_back` | Adds node `new` at the end of the list. |
| `ft_lstdelone` | Frees node memory and applies function `del` to its content. |
| `ft_lstclear` | Deletes and frees node `lst` and every successor node using `del` and `free`. |
| `ft_lstiter` | Iterates through a list applying function `f` to the content of each node. |
| `ft_lstmap` | Iterates a list applying function `f` to content to create and return a new list. |

---

## Instructions

### Compilation
To compile the library and generate `libft.a` in the root of the repository, run:

```bash
make
```

### Makefile Rules

* **`make` / `make all`**: Compiles all source files and creates the static library `libft.a`.
* **`make clean`**: Removes intermediate object files (`.o`).
* **`make fclean`**: Removes intermediate object files and the generated library `libft.a`.
* **`make re`**: Rebuilds the library from scratch (`fclean` + `all`).

### Usage
To use **Libft** in your project, include the header `#include "libft.h"` and compile your code linking the static library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program_name
```

---

## Resources

### References
* Linux / POSIX Manual Pages (`man malloc`, `man memcpy`, `man string.h`)
* C99 Language Specification
* 42 Norm Guidelines

### AI Policy
In compliance with the 42 curriculum guidelines regarding artificial intelligence usage:
* **Approach:** AI was used exclusively as a conceptual reference tool for clarifying standard behavior, edge cases (e.g., memory overlapping in `memmove` vs `memcpy`, `calloc` behavior on 0 allocation), and formatting documentation (`README.md`).
* **Implementation:** No direct code solutions or automatic code generators were used to write library functions. Fundamental reasoning and peer discussions were prioritized to construct the library.