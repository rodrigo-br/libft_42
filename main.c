#include <stdio.h> // print
#include <ctype.h> // is_*
#include <bsd/string.h> // strlcat / strlcpy
#include "libft.h"

int main (void)
{
	int katchau = -10;

	
	// ft_isalnum
	/* while (katchau++ < 257)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_isalnum(katchau), isalnum(katchau));
	} */

	/* // ft_isalpha	
	while (katchau++ < 257)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_isalpha(katchau), isalpha(katchau));
	} */
/* 
	// ft_isascii
	while (katchau++ < 257)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_isascii(katchau), isascii(katchau));
	} */

	/* // ft_isdigit
	while (katchau++ < 257)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_isdigit(katchau), isdigit(katchau));
	} */

	// ft_isprint
	while (katchau++ < 257)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_isprint(katchau), isprint(katchau));
	}

	// ft_bzero
	/* (void)	katchau;
	char	cavalinho[] = "cavalinho";
	char	bezerro[] = "cavalinho";
	ft_bzero(cavalinho, 5);
	bzero(bezerro, 5);
	printf("meu = %s.\ndele = %s.", cavalinho, bezerro);
	printf("\nmeu = %c\ndele = %c\n", cavalinho[7], bezerro[7]); */

	/* // ft_memcpy
	(void)	katchau;
	char	cavalinho[] = "cavalinho cavalão";
	char	bezerro[] = "cavalinho cavalão";
	char	cachorrinho[] = "nico";
	char	cachorrao[] = "";
	ft_memcpy(cavalinho, cachorrinho, 4);
	memcpy(bezerro, cachorrinho, 4);
	printf("meu  = %s.\ndele = %s.\n", cavalinho, bezerro);
	printf("meu  = %s.\ndele = %s.", \
	(char *)ft_memcpy(cavalinho, cachorrao, 5), \
	(char *)memcpy(bezerro, cachorrao, 5)); */

	/* // ft_memset
	(void)	katchau;
	char	cavalinho[] = "cavalinho cavalão";
	char	bezerro[] = "cavalinho cavalão";
	ft_memset(cavalinho, 'k', 5);
	memset(bezerro, 'k', 5);
	printf("meu  = %s.\ndele = %s.\n", cavalinho, bezerro);
	printf("meu  = %s.\ndele = %s.", \
	(char *)ft_memset(cavalinho, '0', 5), \
	(char *)memset(bezerro, '0', 5)); */

	// ft_strlen
	/* (void) katchau;
	char	cavalinho[] = "cavalinho cavalão";
	char	bezerro[] = "cavalinho cavalão";
	printf("meu = %ld\ndele = %ld\n", ft_strlen(cavalinho), strlen(bezerro));
	char	cavalinho1[] = "";
	char	bezerro1[] = "";
	printf("meu = %ld\ndele = %ld\n", ft_strlen(cavalinho1), strlen(bezerro1));
	bzero(cavalinho1, 1);
	bzero(bezerro1, 1);
	printf("meu = %ld\ndele = %ld\n", ft_strlen(cavalinho1), strlen(bezerro1));
	char	cavalinho2[] = "çà~\n\t0";
	char	bezerro2[] = "çà~\n\t0";
	printf("meu = %ld\ndele = %ld\n", ft_strlen(cavalinho2), strlen(bezerro2)); */
	
	/* // ft_memmove
	(void)	katchau;
	char *string_10;
    char *string_20;
    string_10 = strdup("abcdefgh");
    string_20 = string_10 + 4;
    ft_memmove(string_10, string_20, 5);
    printf("meu  = %s\n", string_10);
	char *string_1;
    char *string_2;
    string_1 = strdup("abcdefgh");
    string_2 = string_1 + 4;
    memmove(string_1, string_2, 5);
    printf("dele = %s\n\n", string_1); // dest > src, poucos caracteres
	char *strings_10;
    char *strings_20;
    strings_10 = strdup("abcdefgh");
    strings_20 = strings_10 + 4;
    ft_memmove(strings_20, strings_10, 5);
    printf("meu  = %s\n", strings_20);
	char *strings_1;
    char *strings_2;
    strings_1 = strdup("abcdefgh");
    strings_2 = strings_1 + 4;
    memmove(strings_2, strings_1, 5);
    printf("dele = %s\n\n", strings_2);	// dest < src, poucos caracteres
	char *string1;
    char *string2;
    string1 = strdup("abcdefghijklmnopq0123456789");
    string2 = string1 + 4;
    ft_memmove(string1, string2, 15);
    printf("meu  = %s\n", string1);
	char *string10;
    char *string20;
    string10 = strdup("abcdefghijklmnopq0123456789");
    string20 = string10 + 4;
    memmove(string10, string20, 15);
    printf("dele = %s\n\n", string10); // dest > src, muitos caracteres
	char *strings1;
    char *strings2;
    strings1 = strdup("abcdefghijklmnopq0123456789");
    strings2 = strings1 + 4;
    ft_memmove(strings2, strings1, 15);
    printf("meu  = %s\n", strings2);
	char *strings10;
    char *strings20;
    strings10 = strdup("abcdefghijklmnopq0123456789");
    strings20 = strings10 + 4;
    memmove(strings20, strings10, 15);
    printf("dele = %s\n", strings20); // dest < src, muitos caracteres */

	// ft_strlcpy NÍVEL HARD
	// (void) katchau;
	// char *string_10;
    // char *string_20;
    // string_10 = strdup("abcdefgh");
    // string_20 = string_10 + 4;
    // printf("return = %ld\n", ft_strlcpy(string_10, string_20, 5));
    // printf("meu  = %s\n", string_10);
	// char *string_1;
    // char *string_2;
    // string_1 = strdup("abcdefgh");
    // string_2 = string_1 + 4;
    // printf("return = %ld\n", strlcpy(string_1, string_2, 5));
    // printf("dele = %s\n\n", string_1); // dest > src, poucos caracteres
	// char *strings_10;
    // char *strings_20;
    // strings_10 = strdup("abcdefgh");
    // strings_20 = strings_10 + 4;
    // printf("return = %ld\n", ft_strlcpy(strings_20, strings_10, 5));
    // printf("meu  = %s\n", strings_20);
	// char *strings_1;
    // char *strings_2;
    // strings_1 = strdup("abcdefgh");
    // strings_2 = strings_1 + 4;
    // printf("return = %ld\n", strlcpy(strings_2, strings_1, 5));
    // printf("dele = %s\n\n", strings_2);	// dest < src, poucos caracteres
	// char *string1;
    // char *string2;
    // string1 = strdup("abcdefghijklmnopq0123456789");
    // string2 = string1 + 4;
    // printf("return = %ld\n", ft_strlcpy(string1, string2, 15));
    // printf("meu  = %s\n", string1);
	// char *string10;
    // char *string20;
    // string10 = strdup("abcdefghijklmnopq0123456789");
    // string20 = string10 + 4;
    // printf("return = %ld\n", strlcpy(string10, string20, 15));
    // printf("dele = %s\n\n", string10); // dest > src, muitos caracteres
	// char *strings1;
    // char *strings2;
    // strings1 = strdup("abcdefghijklmnopq0123456789");
    // strings2 = strings1 + 4;
    // printf("return = %ld\n", ft_strlcpy(strings2, strings1, 20));
    // printf("meu  = %s\n", strings2);
	// char *strings10;
    // char *strings20;
    // strings10 = strdup("abcdefghijklmnopq0123456789");
    // strings20 = strings10 + 4;
    // printf("return = %ld\n", strlcpy(strings20, strings10, 20));
    // printf("dele = %s\n\n", strings20); // dest < src, muitos caracteres
	// char *stringss1;
    // char *stringss2;
    // stringss1 = strdup("abcdefghijklmnopq0123456789");
    // stringss2 = stringss1 + 2;
    // printf("return = %ld\n", ft_strlcpy(stringss2, stringss1, 40));
    // printf("meu  = %s\n", stringss2);
	// char *stringss10;
    // char *stringss20;
    // stringss10 = strdup("abcdefghijklmnopq0123456789");
    // stringss20 = stringss10 + 2;
    // printf("return = %ld\n", strlcpy(stringss20, stringss10, 40));
    // printf("dele = %s\n", stringss20); // size > src, muitos caracteres
	// char *stringx1;
    // char *stringx2;
    // stringx1 = strdup("");
    // stringx2 = stringx1;
    // printf("return = %ld\n", ft_strlcpy(stringx2, stringx1, 40));
    // printf("meu  = %s\n", stringx2);
	// char *stringx10;
    // char *stringx20;
    // stringx10 = strdup("");
    // stringx20 = stringx10;
    // printf("return = %ld\n", strlcpy(stringx20, stringx10, 40));
    // printf("dele = %s\n", stringx20); // size > src, muitos caracteres
    // char *dest;
    // dest = (char *)malloc(sizeof(*dest) *15);
    // memset(dest, 0, 15);
    // memset(dest, 'r', 6);
    // printf("%ld\n", strlcpy(dest, "lorem", 15));
    // write(1, dest, 15);
    // printf("\n%ld\n", ft_strlcpy(dest, "lorem", 15));
    // write(1, dest, 15);
    // memset(dest, 0, 15);
    // memset(dest, 'r', 6);
    // printf("\n%ld\n", strlcpy(dest, "", 15));
    // write(1, dest, 15);
    // printf("\n%ld\n", ft_strlcpy(dest, "", 15));
    // write(1, dest, 15);
    // memset(dest, 0, 15);
    // memset(dest, 'r', 6);
    // printf("\n%ld\n", strlcpy(dest, "lorem ipsum dolor sit amet", 0));
    // printf("dest: %s\n",dest);
    // printf("%ld\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
    // printf("dest: %s\n",dest);

	// ft_strlcat
	// (void)	katchau;
	// char string_10[] = "abcdefgh";
    // char string_20[] = "0123456789";
    // printf("TEST 1\nreturn = %ld\n", ft_strlcat(string_10, string_20, 5));
    // printf("meu  = %s\n", string_10);
	// char string_1[] = "abcdefgh";
    // char string_2[] = "0123456789";
    // printf("return = %ld\n", strlcat(string_1, string_2, 5));
    // printf("dele = %s\n\n", string_1); // dest > src, poucos caracteres
	// char strings_10[] = "abcdefgh";
    // char strings_20[] = "abcdefgh";
    // printf("TEST 2\nreturn = %ld\n", ft_strlcat(strings_20, strings_10, 5));
    // printf("meu  = %s\n", strings_20);
	// char strings_1[] = "abcdefgh";
    // char strings_2[] = "abcdefgh";
    // printf("return = %ld\n", strlcat(strings_2, strings_1, 5));
    // printf("dele = %s\n\n", strings_2);	// dest < src, poucos caracteres
	// char string1[] = "abcdefghijklmnopq0123456789";
    // char string2[] = "abcdefgh";
    // printf("TEST 3\nreturn = %ld\n", ft_strlcat(string1, string2, 15));
    // printf("meu  = %s\n", string1);
	// char string10[] = "abcdefghijklmnopq0123456789";
    // char string20[] = "abcdefgh";
    // printf("return = %ld\n", strlcat(string10, string20, 15));
    // printf("dele = %s\n\n", string10); // dest > src, muitos caracteres
	// char strings1[] = "abcdefghijklmnopq0123456789";
    // char strings2[] = "abcdefgh";
    // printf("TEST 4\nreturn = %ld\n", ft_strlcat(strings2, strings1, 20));
    // printf("meu  = %s\n", strings2);
	// char strings10[] = "abcdefghijklmnopq0123456789";
    // char strings20[] = "abcdefgh";
    // printf("return = %ld\n", strlcat(strings20, strings10, 20));
    // printf("dele = %s\n\n", strings20); // dest < src, muitos caracteres
	// char stringss1[]= "abcdefghijklmnopq0123456789";
    // char stringss2[]= "abcdefgh";
    // printf("TEST 5\nreturn = %ld\n", ft_strlcat(stringss2, stringss1, 40));
    // printf("meu  = %s\n", stringss2);
	// char stringss10[] = "abcdefghijklmnopq0123456789";
    // char stringss20[] = "abcdefgh";
    // printf("return = %ld\n", strlcat(stringss20, stringss10, 40));
    // printf("dele = %s\n", stringss20); // size > src, muitos caracteres

	/* // ft_toupper
	while (katchau++ < 260)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_toupper(katchau), toupper(katchau));
	} */

	/* // ft_tolower 
	while (katchau++ < 260)
	{
		printf("katchau = %d = meu = %d dele = %d\n", \
		katchau, ft_tolower(katchau), tolower(katchau));
	} */

	/* // ft_strchr
	(void) katchau;

	char string_10[] = "abcdefgh";
    printf("TEST 1\nmeu  = %s\n", ft_strchr(string_10, 'e'));
	char string_1[] = "abcdefgh";
    printf("dele = %s\n", strchr(string_1, 'e'));
	char string[] = "abcdefgh";
    printf("TEST 2\nmeu  = %s\n", ft_strchr(string, '\0'));
	char stringx[] = "abcdefgh";
    printf("dele = %s\n", strchr(stringx, '\0'));
	char string10[] = "abcdefgh";
    printf("TEST 3\nmeu  = %s\n", ft_strchr(string10, ' '));
	char string1[] = "abcdefgh";
    printf("dele = %s\n", strchr(string1, ' ')); */

	/* // ft_strrchr
	(void) katchau;

	char string_10[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 1\nmeu  = %s\n", ft_strrchr(string_10, 'e'));
	char string_1[] = "abcdefghabcdefghabcdefgh";
    printf("dele = %s\n", strrchr(string_1, 'e'));
	char string[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 2\nmeu  = %s\n", ft_strrchr(string, '\0'));
	char stringx[] = "abcdefghabcdefghabcdefgh";
    printf("dele = %s\n", strrchr(stringx, '\0'));
	char string10[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 3\nmeu  = %s\n", ft_strrchr(string10, ' '));
	char string1[] = "abcdefghabcdefghabcdefgh";
    printf("dele = %s\n", strrchr(string1, ' '));
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("TEST 4\nmeu  = %s\n", ft_strrchr(s, 't'));
	printf("dele = %s\n", strrchr(s, 't'));
	printf("TEST 5\nmeu  = %s\n", ft_strrchr(s, 'l'));
	printf("dele = %s\n", strrchr(s, 'l'));
	printf("TEST 6\nmeu  = %s\n", ft_strrchr(s2, 'l'));
	printf("dele = %s\n", strrchr(s2, 'l'));
	printf("TEST 7\nmeu  = %s\n", ft_strrchr(s, 'z'));
	printf("dele = %s\n", strrchr(s, 'z'));
	printf("TEST 8\nmeu  = %s\n", ft_strrchr(s, 0));
	printf("dele = %s\n", strrchr(s, 0));
	printf("TEST 9\nmeu  = %s\n", ft_strrchr(s, 't' + 256));
	printf("dele = %s\n", strrchr(s, 't' + 256));
	char * empty = (char*)calloc(1, 1);
	printf("TEST 10\nmeu  = %s\n", ft_strrchr(empty, 'V'));
	char * empty1 = (char*)calloc(1, 1);
	printf("dele = %s\n", strrchr(empty1, 'V')); */

	/* // ft_memchr
	(void) katchau;

	char string_10[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 1\nmeu  = %p\n", ft_memchr(string_10, 'e', 5));
    printf("dele = %p\n", memchr(string_10, 'e', 5));
	char string[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 2\nmeu  = %p\n", ft_memchr(string, '\0', 5));
    printf("dele = %p\n", memchr(string, '\0', 5));
	char string10[] = "abcdefghabcdefghabcdefgh";
    printf("TEST 3\nmeu  = %p\n", ft_memchr(string10, ' ', 5));
    printf("dele = %p\n", memchr(string10, ' ', 5));
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("TEST 4\nmeu  = %p\n", ft_memchr(s, 't', 5));
	printf("dele = %p\n", memchr(s, 't', 5));
	printf("TEST 5\nmeu  = %p\n", ft_memchr(s, 'l', 5));
	printf("dele = %p\n", memchr(s, 'l', 5));
	printf("TEST 6\nmeu  = %p\n", ft_memchr(s2, 'l', 5));
	printf("dele = %p\n", memchr(s2, 'l', 5));
	printf("TEST 7\nmeu  = %p\n", ft_memchr(s, 'z', 5));
	printf("dele = %p\n", memchr(s, 'z', 5));
	printf("TEST 8\nmeu  = %p\n", ft_memchr(s, 0, 5));
	printf("dele = %p\n", memchr(s, 0, 5));
	printf("TEST 9\nmeu  = %p\n", ft_memchr(s, 't' + 256, 5));
	printf("dele = %p\n", memchr(s, 't' + 256, 5));
	char * empty = (char*)calloc(1, 1);
	printf("TEST 10\nmeu  = %p\n", ft_memchr(empty, 'V', 5));
	char * empty1 = (char*)calloc(1, 1);
	printf("dele = %p\n", memchr(empty1, 'V', 5)); */

	/* // ft_memcmp
	(void) katchau;
	char s[] = {-128, 0, 127, 0};
	char s1[] = {-128, 0, 127, 0};
	printf("meu  = %d\n", ft_memcmp(s, s1, 4));
	printf("dele = %d\n", memcmp(s, s1, 4));
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("meu  = %d\n", ft_memcmp(s2, s3, 4));
	printf("dele = %d\n", memcmp(s2, s3, 4));
	char s4[] = {0, 1, 2, 20};
	char s5[] = {0, 1, 2, 21};
	printf("meu  = %d\n", ft_memcmp(s4, s5, 4));
	printf("dele = %d\n", memcmp(s4, s5, 4));
	char s6[] = {21, 2, 1, 0};
	char s7[] = {20, 2, 1, 0};
	printf("meu  = %d\n", ft_memcmp(s6, s7, 4));
	printf("dele = %d\n", memcmp(s6, s7, 4)); */

	/* // ft_strncmp
	(void) katchau;
	printf("TEST 1\nmeu  = %d\n", ft_strncmp("t", "", 0));
	printf("dele = %d\n", strncmp("t", "", 0));
	printf("TEST 2\nmeu  = %d\n", ft_strncmp("1234", "1235", 3));
	printf("dele = %d\n", strncmp("1234", "1235", 3));
	printf("TEST 3\nmeu  = %d\n", ft_strncmp("1234", "1235", 4));
	printf("dele = %d\n", strncmp("1234", "1235", 4));
	printf("TEST 4\nmeu  = %d\n", ft_strncmp("1234", "1235", -1));
	printf("dele = %d\n", strncmp("1234", "1235", -1));
	printf("TEST 5\nmeu  = %d\n", ft_strncmp("", "", 42));
	printf("dele = %d\n", strncmp("", "", 42));
	printf("TEST 6\nmeu  = %d\n", ft_strncmp("Tripouille", "Tripouille", 42));
	printf("dele = %d\n", strncmp("Tripouille", "Tripouille", 42));
	printf("TEST 7\nmeu  = %d\n", ft_strncmp("Tripouille", "TripouillE", 42));
	printf("dele  = %d\n", strncmp("Tripouille", "TripouillE", 42));
	printf("TEST 8\nmeu  = %d\n", ft_strncmp("Tripouille", "TripouilleX", 42));
	printf("dele  = %d\n", strncmp("Tripouille", "TripouilleX", 42));
	printf("TEST 9\nmeu  = %d\n", ft_strncmp("Tripouille", "Tripouill", 42));
	printf("dele  = %d\n", strncmp("Tripouille", "Tripouill", 42));
	printf("TEST 10\nmeu  = %d\n", ft_strncmp("", "1", 0));
	printf("dele  = %d\n", strncmp("", "1", 0));
	printf("TEST 11\nmeu  = %d\n", ft_strncmp("1", "", 0));
	printf("dele  = %d\n", strncmp("1", "", 0));
	printf("TEST 12\nmeu  = %d\n", ft_strncmp("", "1", 1));
	printf("dele  = %d\n", strncmp("", "1", 1));
	printf("TEST 13\nmeu  = %d\n", ft_strncmp("1", "", 1));
	printf("dele  = %d\n", strncmp("1", "", 1));
	printf("TEST 14\nmeu  = %d\n", ft_strncmp("", "", 1));
	printf("dele  = %d\n", strncmp("", "", 1)); */

	/* // ft_strnstr
	(void) katchau;
    char teste[] = "lorem ipsum dolor sit amet";

    printf("%s\n", strnstr(teste, "lorem", 15));
    printf("%s\n", ft_strnstr(teste, "lorem", 15));
	const char *hay1 = "Foo Bar Baz";
    const char *needle1 = "Bar";
    char *hay2 = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n stackdummy";
    char *needle2 = "stackdummy";
    printf("%s\n", strnstr(hay1, needle1, 10));
    printf("%s\n", ft_strnstr(hay1, needle1, 10));
    printf("%s\n", strnstr(hay2, needle2, 70));
    printf("%s\n", ft_strnstr(hay2, needle2, 70)); */

	return (0);
}
