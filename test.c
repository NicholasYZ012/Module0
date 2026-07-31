/*
cc -Wall -Werror -Wextra test.c -L . -lft -lbsd -o test
*/
#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	// STRLCAT TEST
	// Truncation means cutting short an object
	// When returned value(RV) >= passed size: truncation occured to final string
	// RV represents the supposed length or char count of the concatenated string
	// RV = passed size means 1 byte is truncated out of the final string for '\0'
	
	char dscat[10] = "apple";
	char sscat[] = "s";
	char dscatori[10] = "apple";
	char sscatori[] = "s";
	printf("##MINE##\nno: %ld\nword: %s\n\n", ft_strlcat(dscat, sscat, 6), dscat);
	printf("##LIB##\nno: %ld\nword: %s\n\n\n", strlcat(dscatori, sscatori, 6), dscatori);

	// TOUPPER AND TOLOWER TEST

	printf("##MINE##\ntoupper: %c => %c\n", 'a', ft_toupper('a'));
	printf("toupper: %c => %c\n", 'A', ft_toupper('A'));
	printf("toupper: %c => %c\n", '3', ft_toupper('3'));
	printf("tolower: %c => %c\n", 'A', ft_tolower('A'));
	printf("tolower: %c => %c\n", 'a', ft_tolower('a'));
	printf("tolower: %c => %c\n", '%', ft_tolower('%'));
	printf("tolower: %c => %c\n\n", -1, ft_tolower(-1));
	printf("##LIB##\ntoupper: %c => %c\n", 'a', toupper('a'));
	printf("toupper: %c => %c\n", 'A', toupper('A'));
	printf("toupper: %c => %c\n", '3', toupper('3'));
	printf("tolower: %c => %c\n", 'A', tolower('A'));
	printf("tolower: %c => %c\n", 'a', tolower('a'));
	printf("tolower: %c => %c\n", '%', tolower('%'));
	printf("tolower: %c => %c\n\n\n", -1, tolower(-1));
}