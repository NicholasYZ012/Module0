// cc -Wall -Werror -Wextra test.c -L . -lft -lbsd -o test
#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

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
	printf("no: %ld\nword: %s\n", ft_strlcat(dscat, sscat, 6), dscat);
	printf("no: %ld\nword: %s\n", strlcat(dscatori, sscatori, 6), dscatori);
}