#include "libtests.h"

void strlcpy_test(const char *s1, const char *s2, size_t n){
	char *src = strdup(s2);
	char *dst = strdup(s1);
	int rv = -1;

	char *libsrc = strdup(s2);
	char *libdst = strdup(s1);
	int librv = -1;

	putstr("~~~~STRLCPY TEST~~~~");
	printf("src: %s\ndest: %s\nn: %ld\n", src, dst, n);
	rv = ft_strlcpy(dst, src, n);
	librv = strlcpy(libdst, libsrc, n);
	printf("### AFTER STRLCPY ###\nMy dest: %s\nMy RV: %d\n", dst, rv);
	printf("Lib dest: %s\nLib RV: %d\n\n\n", libdst, librv);
	free(dst);
	free(src);
	free(libdst);
	free(libsrc);
}