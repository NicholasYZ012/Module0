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
	printf("src: %s\ndest: %s\nn: %ld\n", src, dst, catsize);
	printf("##MINE##\nRV: %ld\nword: %s\n", ft_strlcat(dst, src, catsize), dst);
	printf("String: ");
	for (int i = 0; i < ft_strlen(dst) + 1; i++)
		printf("%c ", dst[i]);
	putstr("");
	printf("Int: ");
	for (int i = 0; i < ft_strlen(dst) + 1; i++)
		printf("%d ", dst[i]);
	putstr("\n");
	printf("##LIB##\nRV: %ld\nword: %s\n", strlcat(libdst, libsrc, catsize), libdst);
	printf("String: ");
	for (int i = 0; i < ft_strlen(libdst) + 1; i++)
		printf("%c ", libdst[i]);
	putstr("");
	printf("Int: ");
	for (int i = 0; i < ft_strlen(libdst) + 1; i++)
		printf("%d ", libdst[i]);
	putstr("\n\n");
	free(dst);
	free(src);
	free(libdst);
	free(libsrc);
}