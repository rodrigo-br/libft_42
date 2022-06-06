/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:46:38 by ralves-b          #+#    #+#             */
/*   Updated: 2022/06/04 02:12:11 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include <stdio.h> // DELETAR

/**
 * @brief 	Checks for an alphabetic character;
 *        	in the standard "C" locale,  it  is
 *        	equivalent to (isupper(c) || islower(c)).
 * 			In some locales, there
 *        	may  be  additional  characters for
 *        	which  isalpha()  is   true—letters
 *        	which  are  neither  uppercase  nor
 *        	lowercase.
 * @param c Param to be tested.
 * @return  The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int		ft_isalpha(int c);

/**
 * @brief	Checks for a digit (0 through 9).
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not. 
 */
int		ft_isdigit(int c);

/**
 * @brief	checks for an alphanumeric character;
 * 			it is equivalent to (isalpha(c) || isdigit(c)).
 * @param c Param to be tested.
 * @return 	The values returned are nonzero  if  the
 *          character c falls into the tested class,
 *          and zero if not.
 */
int		ft_isalnum(int c);

/**
 * @brief	checks whether c is a 7-bit unsigned char
 * 			value  that fits into the ASCII character set.
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int		ft_isascii(int c);

/**
 * @brief	checks for any printable character
 * 			including space.
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int		ft_isprint(int c);
/**
 * @brief	The   strlen()   function  calculates  the
 *      	length of the string pointed to by s, excluding
 *			the terminating null byte ('\0').
 * @param s String to be parsed.
 * @return	Returns the number
 *			of bytes in the string pointed to by s. 
 */
size_t	ft_strlen(const char *s);

/**
 * @brief	Fills the first n bytes of the memory area
       		pointed to by s with the constant byte c.
 * @param s	A pointer to the block of memory to fill.
 * @param c the value to be set. The value is passed as an int, 
 * 			but the function fills the block of memory using the unsigned 
 * 			char conversion of this value.
 * @param n Number of bytes to be set to the value.
 * @return	Returns a pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief	Erases the data in the n bytes of the memory
 * 			starting at the location pointed to by s, by writing zeros  (bytes
 * 			containing '\0') to that area.
 * @param s A pointer to the block of memory to erase.
 * @param n Number of bytes to be set to the value.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief		Copies n characters from memory
 * 				area src to memory area dest.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 		A pointer to destination, which is dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 		The memmove() function copies n
 *    			bytes from memory area src to memory
 *      		area dest. The memory areas may	overlap.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 	 	A pointer to destination, which is dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief 		Copies up to size - 1 characters
 *    			from the NUL-terminated string
 *   			src to dst, NUL-terminating the
 *    			result.
 * @param dst 	Pointer to the destination array
 * 				where the string is to be copied.
 * @param src 	Pointer to the source of string to be copied
 * @param size 	Number of characteres to be copied.
 * @return 		The total length of the string
 *				it tried to create, that means
 *				the length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief 		appends the NUL-
 *				terminated string src to the end of dst.
 *				It will append at most size -
 *				strlen(dst) - 1 bytes, NUL-terminating
 *				the result.
 * @param dst 	Pointer to the destination array
 * 				where the string is to be copied.
 * @param src 	Pointer to the source of string to be copied.
 * @param size 	Number of characteres to be copied.
 * @return  	The total length of the string
 *				it tried to create, that means 
 *				the initial length
 * 				of dst plus the length of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief 	convert lowercase letters to uppercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int		ft_toupper(int c);

/**
 * @brief 	convert uppercase letters to lowercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int 	ft_tolower(int c);

/**
 * @brief 	Returns  a pointer to
 *      	the first occurrence of the
 *      	character c in the string s.
 * @param s The string to be scanned
 * @param c The character to be searched in s
 * @return  A pointer to the matched char‐
 *			acter or NULL if the character is not
 *			found
 */
char 	*ft_strchr(const char *s, int c);

/**
 * @brief 	Returns  a pointer to
 *      	the last occurrence of the
 *      	character c in the string s.
 * @param s The string to be scanned
 * @param c The character to be searched in s
 * @return	A pointer to the matched char‐
 *			acter or NULL if the character is not
 *			found 
 */
char 	*ft_strrchr(const char *s, int c);

/**
 * @brief 	scans the initial 
 *	   		n  bytes  of  the  memory   area
 *      	pointed to by s for the first instance
 *      	of c. Both c and  the  bytes  of  the
 *      	memory area pointed to by s are interpreted
 *	   		as unsigned char.
 * @param s	Pointer to the memory area to be scanned
 * @param c	The caracter to be searched in s
 * @param n	Number of bytes to be scanned
 * @return	a pointer to the matching byte
 *      	or NULL if the character does not 
 *      	occur in the given memory area. 
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief		Compares the first n bytes
 *      		(each interpreted as unsigned
 *      		char)  of  the memory areas s1 and s2. 
 * @param s1 	First memory area to be compared to s2
 * @param s2 	Second memory area to be compared to s1
 * @param n 	Number of bytes to compare
 * @return	 	an integer less than, equal to, or greater
 *     			than zero if the first n bytes  of  s1
 *      		is  found,  respectively,  to  be less
 *      		than, to match, or be greater than the
 *      		first n bytes of s2. 
 *      		For  a  nonzero return value, the sign
 *      		is determined by the sign of the  dif‐
 *      		ference  between  the  first  pair  of
 *      		bytes (interpreted as  unsigned  char)
 *      		that differ in s1 and s2.
 *      		If n is zero, the return value is zero.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief		Compares  only the first (at most)
 *				n bytes of the two strings s1 and s2
 * @param s1 	The first string to be compared.
 * @param s2 	The second string to be compared.
 * @param n 	The maximum number of characters to be compared.
 * @return		An integer less than, equal to,
 *      		or greater than zero  if  s1  (or  the
 *      		first  n  bytes thereof) is found, re‐
 *      		spectively, to be less than, to match,
 *      		or be greater than s2 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief 			Locates the first
 *    				occurrence of the null-terminated string
 *    				little in the string big, where not more
 *    				than len characters are searched.
 *				    Characters that appear after a ‘\0’
 *				    character are not searched.  Since the
 *				    strnstr() function is a FreeBSD specific
 *				    API, it should only be used when
 *				    portability is not a concern.
 * @param big 		The main string to be scanned.
 * @param little 	The small string to be searched with-in
 * 					haystack string.
 * @param len 		The maximum number of characteres to search for.
 * @return			If little is an empty string, big is
 *    				returned; if little occurs nowhere in big,
 *    				NULL is returned; otherwise a pointer to
 *    				the first character of the first
 *    				occurrence of little is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief			Converts the initial portion of the 
 *      			string pointed to by nptr to int.
 * @param nptr 		Pointer to the string to be converted.
 * @return 			An int with the converted value.
 */
int		ft_atoi(const char *nptr);

/**
 * @brief 			allocates  memory  for
 *      			an  array  of  nmemb  elements of size 
 *      			bytes each and returns a pointer to the  
 *      			allocated memory. The memory is set to zero.
 * @param nmemb 	Number of elements to array.
 * @param size 		The size of elements.
 * @return			return a
 *      			pointer to the allocated memory, which is
 *      			suitably aligned for any built-in type. On
 *      			error, return NULL. NULL
 *     				may also be returned by a successful call
 *  				calloc() with nmemb or size
 *      			equal to zero.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief		Returns a pointer to a
 *      		string  which  is  a  duplicate  of  the
 *      		string  s.  Memory for the new string is
 *      		obtained with malloc(3), and can be freed with
 *      		free(3).
 * @param s 	String to be duplicated.
 * @return		A pointer  to  the  duplicated string. It 
 *      		returns NULL if insufficient memory was
 *      		available.
 */
char	*ft_strdup(const char *s);

/**
 * @brief 		Allocates (with malloc(3)) and returns a substring
 * 				from the string ’s’.
 * 				The substring begins at index ’start’ and is of
 * 				maximum size ’len’.
 * @param s 	The string from which to create the substring.
 * @param start The start index of the substring in the
 *				string ’s’.
 * @param len 	The maximum length of the substring.
 * @return		The substring or NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief 		Allocates (with malloc(3)) and returns a new
 * 				string, which is the result of the concatenation
 *				of ’s1’ and ’s2’.
 * @param s1 	The prefix string.
 * @param s2 	The suffix string.
 * @return 		The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief 		Allocates (with malloc(3)) and returns a copy of
 *				’s1’ with the characters specified in ’set’ removed
 *				from the beginning and the end of the string.
 * @param s1 	The string to be trimmed.
 * @param set 	The reference set of characters to trim.
 * @return		The trimmed string or NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief 	Allocates (with malloc(3)) and returns an array
 * 			of strings obtained by splitting ’s’ using the
 * 			character ’c’ as a delimiter. The array must end
 * 			with a NULL pointer.
 * @param s The string to be splited
 * @param c The delimiter character.
 * @return	The array of new strings resulting from the split
 *			or NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief 	Allocates (with malloc(3)) and returns a string
 * 			representing the integer received as an argument.
 * 			Negative numbers must be handled.
 * @param n The integer to convert
 * @return	Returns the string representing the integer
 *  		or NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief 	Applies the function ’f’ to each character of the
 *			string ’s’, and passing its index as first argument
 *			to create a new string (with malloc(3)) resulting
 *			from successive applications of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return 	The string created from the successive applications
 *			of ’f’ or returns NULL if the allocation fails.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief 	Applies the function ’f’ on each character of
 *			the string passed as argument, passing its index
 *			as first argument. Each character is passed by
 *			address to ’f’ to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief 		Outputs the character ’c’ to the given file
 *				descriptor.
 * @param c 	The character to output.
 * @param fd 	The file descriptor on which to write.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief 		Outputs the string ’s’ to the given file
 *				descriptor.
 * @param s 	The string to output.
 * @param fd 	The file descriptor on which to write.
 */
void ft_putstr_fd(char *s, int fd);

/**
 * @brief 		Outputs the string ’s’ to the given file 
 *				descriptor followed by a newline.
 * @param s 	The string to output.
 * @param fd 	The file descriptor on which to write.
 */
void ft_putendl_fd(char *s, int fd);

/**
 * @brief 		Outputs the integer ’n’ to the given file
 *				descriptor.
 * @param n		The integer to output.
 * @param fd 	The file descriptor on which to write.
 */
void ft_putnbr_fd(int n, int fd);

#endif
