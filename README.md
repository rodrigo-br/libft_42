# Libft 42 Project

## What is it?

This project is about coding a C library.
It contain a lot of general purpose functions your programs will rely upon

This project is about understanding the way these functions work,
implementing and learning to use them. It will be
helpful since you will use it in your next C school assignments

<br><br>

### A few rules

<p>As most of 42's Projects, this one also have a few rules (such as the prohibition of the use of 
<span style="color:#33DAFF">for</span>,
<span style="color:#33DAFF"> VLA</span>,
<span style="color:#33DAFF"> global variables</span>
and others).</p> 

<br><br>

## How to use it

Clone
cd libft_42
make
touch main.cc
cc main.cc libft.a -lbsd && ./a.out

## Part 1 - Libc functions

This part is about recreate a set of functions from the libc. The functions will have the same prototypes and the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

<br>

<details>
	<summary>isalpha</summary>
<hr>
	<p>checks for an alphabetic character; in
              the standard "C" locale, it is equiva‐
              lent to  (isupper(c)  ||  islower(c)).
              In  some  locales,  there may be addi‐
              tional characters for which  isalpha()
              is  true—letters which are neither up‐
              percase nor lowercase.</p>
	<a href="https://github.com/rodrigo-br/libft_42/blob/main/libft/part_1/ft_isalpha.c">ft_isalpha</a>
	
<hr>
</details>

<br>

<details>
	<summary>isdigit</summary>
<hr>
	checks for a digit (0 through 9).
<hr>
</details>

<br>

<details>
	<summary>isalnum</summary>
<hr>
	checks for an alphanumeric  character;
              it is equivalent to (isalpha(c) || is‐
              digit(c)).
<hr>
</details>

<br>

<details>
	<summary>isascii</summary>
<hr>
	checks whether c is a  7-bit  unsigned
              char  value  that  fits into the ASCII
              character set.
<hr>
</details>

<br>

<details>
	<summary>isprint</summary>
<hr>
	checks for any printable character in‐
              cluding space.
<hr>
</details>

<br>

<details>
	<summary>strlen</summary>
<hr>
	calculates  the  length  of the
       string pointed to by s, excluding the  terminating  null
       byte ('\0').
<hr>
</details>

<br>

<details>
	<summary>memset</summary>
<hr>
	fills  the first n bytes of the
       memory area pointed to by s with the constant byte c.
<hr>
</details>

<br>

<details>
	<summary>bzero</summary>
<hr>
	erases the data in the n bytes of
       the memory starting at the location pointed to by s,  by
       writing zeros (bytes containing '\0') to that area.
<hr>
</details>

<br>

<details>
	<summary>memcpy</summary>
<hr>
	copies n bytes from memory area
       src to memory area dest.   The  memory  areas  must  not
       overlap.  Use memmove(3) if the memory areas do overlap.
<hr>
</details>

<br>

<details>
	<summary>memmove</summary>
<hr>
	copies n bytes from memory area
       src to memory area dest.  The memory areas may  overlap:
       copying takes place as though the bytes in src are first
       copied into a temporary array that does not overlap  src
       or  dest,  and the bytes are then copied from the tempo‐
       rary array to dest.
<hr>
</details>

<br>

<details>
	<summary>strlcpy</summary>
<hr>
	copies up to size - 1 characters
     from the NUL-terminated string src to dst, NUL-terminating
     the result.
<hr>
</details>

<br>

<details>
	<summary>strlcat</summary>
<hr>
	appends the NUL-terminated string
     src to the end of dst.  It will append at most size -
     strlen(dst) - 1 bytes, NUL-terminating the result.
<hr>
</details>

<br>

<details>
	<summary>toupper</summary>
<hr>
	convert lowercase letters to uppercase
<hr>
</details>

<br>

<details>
	<summary>tolower</summary>
<hr>
	convert uppercase letters to lowercase.
<hr>
</details>

<br>

<details>
	<summary>strchr</summary>
<hr>
	returns a pointer to the first oc‐
       currence of the character c in the string s.
<hr>
</details>

<br>

<details>
	<summary>strrchr</summary>
<hr>
	function returns a pointer to the last oc‐
       currence of the character c in the string s.
<hr>
</details>

<br>

<details>
	<summary>strncmp</summary>
<hr>
	compares the two strings s1 and
       s2.  The locale is not taken into account.  It returns an inte‐
       ger less than, equal to, or greater than zero if  s1  is
       found,  respectively,  to  be less than, to match, or be
       greater than s2.
<hr>
</details>

<br>

<details>
	<summary>memchr</summary>
<hr>
	scans the initial n bytes  of  the
       memory area pointed to by s for the first instance of c.
       Both c and the bytes of the memory area pointed to by  s
       are interpreted as unsigned char.
<hr>
</details>

<br>

<details>
	<summary>memcmp</summary>
<hr>
	compares the first n bytes (each
       interpreted as unsigned char) of the memory areas s1 and
       s2.
<hr>
</details>

<br>

<details>
	<summary>strnstr</summary>
<hr>
	locates the first occurrence of the
     null-terminated string little in the string big, where not
     more than len characters are searched.  Characters that
     appear after a ‘\0’ character are not searched.
<hr>
</details>

<br>

<details>
	<summary>atoi</summary>
<hr>
	converts the initial portion of the
       string pointed to by nptr to int.
<hr>
</details>

<br>

<details>
	<summary>calloc</summary>
<hr>
	allocates memory for an  array  of
       nmemb  elements of size bytes each and returns a pointer
       to the allocated memory.  The memory is set to zero.  If
       nmemb  or  size is 0, then calloc() returns either NULL,
       or a unique pointer value that can later be successfully
       passed  to  free().   If the multiplication of nmemb and
       size would result in integer overflow, then calloc() re‐
       turns  an error.
<hr>
</details>

<br>

<details>
	<summary>strdup</summary>
<hr>
	returns a pointer to a new  string
       which  is  a  duplicate of the string s.  Memory for the
       new string is obtained with malloc(3), and can be  freed
       with free(3).
<hr>
</details>

<br><br><br>


## Part 2 - Additional functions

In this second part, is developed a set of functions that are either not in the libc,
or that are part of it but in a different form.

<br>

<details>
	<summary>ft_substr</summary>
<hr>
	Allocates (with malloc(3)) and returns a substring
 				from the string ’s’.
 				The substring begins at index ’start’ and is of maximum size ’len’.
<hr>
</details>

<br>

<details>
	<summary>ft_strjoin</summary>
<hr>
	Allocates (with malloc(3)) and returns a new
 				string, which is the result of the concatenation
				of ’s1’ and ’s2’.
<hr>
</details>

<br>

<details>
	<summary>ft_strtrim</summary>
<hr>
	Allocates (with malloc(3)) and returns a copy of
				’s1’ with the characters specified in ’set’ removed
				from the beginning and the end of the string.
<hr>
</details>

<br>

<details>
	<summary>ft_split</summary>
<hr>
	Allocates (with malloc(3)) and returns an array
 			of strings obtained by splitting ’s’ using the
 			character ’c’ as a delimiter. The array must end
 			with a NULL pointer.
<hr>
</details>

<br>

<details>
	<summary>ft_itoa</summary>
<hr>
	Allocates (with malloc(3)) and returns a string
 			representing the integer received as an argument.
 			Negative numbers must be handled.
<hr>
</details>

<br>

<details>
	<summary>ft_strmapi</summary>
<hr>
	Applies the function ’f’ to each character of the
			string ’s’, and passing its index as first argument
 		to create a new string (with malloc(3)) resulting
			from successive applications of ’f’.
<hr>
</details>

<br>

<details>
	<summary>ft_striteri</summary>
<hr>
	Applies the function ’f’ on each character of
 		the string passed as argument, passing its index
 		as first argument. Each character is passed by
 		address to ’f’ to be modified if necessary.
<hr>
</details>

<br>

<details>
	<summary>ft_putchar_fd</summary>
<hr>
	Outputs the character ’c’ to the given file
				descriptor.
<hr>
</details>

<br>

<details>
	<summary>ft_putstr_fd</summary>
<hr>
	Outputs the string ’s’ to the given file
			descriptor.
<hr>
</details>

<br>

<details>
	<summary>ft_putendl_fd</summary>
<hr>
	Outputs the string ’s’ to the given file 
				descriptor followed by a newline.
<hr>
</details>

<br>

<details>
	<summary>ft_putnbr_fd</summary>
<hr>
	Outputs the integer ’n’ to the given file
				descriptor.
<hr>
</details>

<br>


<br><br>

## Bonus Part

This part is about implement a list <b>(t_list)</b> and some functions in order to easily use it.

The members of the t_list struct are:
- <b>content</b>: The data contained in the node.
void * allows to store any kind of data.
- <b>next</b>: The address of the next node, or NULL if the next node is the last one.

<br>

<details>
	<summary>ft_lstnew</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstadd_front</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstsize</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstlast</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstadd_back</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstdelone</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstclear</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstiter</summary>
<hr>
<hr>
</details>

<br>

<details>
	<summary>ft_lstmap</summary>
<hr>
<hr>
</details>

<br>