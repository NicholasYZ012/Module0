#include "libtests.h"

void touplower_test(void)
{
	// TOUPPER AND TOLOWER TEST

	putstr("~~~~TOUPPER/LOWER TEST~~~~");
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