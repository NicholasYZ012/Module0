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
	printf("String: ");
	for (int i = 0; i < ft_strlen(dst) + 1; i++)
		printf("%c ", dst[i]);
	putstr("");
	printf("Int: ");
	for (int i = 0; i < ft_strlen(dst) + 1; i++)
		printf("%d ", dst[i]);
	putstr("\n");
	printf("Lib dest: %s\nLib RV: %d\n", libdst, librv);
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