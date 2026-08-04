#include "libtests.h"

void strlcat_test(const char *s1, const char *s2, size_t dstsize, size_t catsize)
{
	// STRLCAT TEST
	// Truncation means cutting short an object
	// When returned value(RV) >= passed size: truncation occured to final string
	// RV represents the supposed length or char count of the concatenated string
	// RV = passed size means 1 byte is truncated out of the final string for '\0'
	
	char *src = strdup(s2);
	char *dst = strcpy(malloc(dstsize * sizeof(char)), s1);
	
	char *libsrc = strdup(s2);
	char *libdst = strcpy(malloc(dstsize * sizeof(char)), s1);
	
	putstr("~~~~STRLCAT TEST~~~~");
	printf("##MINE##\nno: %ld\nword: %s\n\n", ft_strlcat(dst, src, catsize), dst);
	printf("##LIB##\nno: %ld\nword: %s\n\n\n", strlcat(libdst, libsrc, catsize), libdst);
}