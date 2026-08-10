#include "libtests.h"

void memcpymove_test(void *s1, const void *s2, size_t n)
{
	char *src = strdup(s2);
	char *dst = strdup(s1);

	char *libsrc = strdup(s2);
	char *libdst = strdup(s1);
	putstr("~~~~MEMCPY TEST~~~~");
	printf("src: %s\ndest: %s\nA separate set of src and dest is made for lib functions\n", src, dst);
	ft_memcpy(dst, src, n);
	printf("### AFTER MEMCPY ###\nMy dest: %s\n", dst);
	printf("Lib dest: %s\n\n\n", (char *)memcpy(libdst, libsrc, n));
	free(dst);
	free(libdst);
	putstr("~~~~MEMMOVE TEST~~~~\nDone using src only\n(dst is src, src is src + 1)");
	printf("### AFTER MEMMOVE ###\nMy src: %s\n", (char *)ft_memmove(src, src+3, n));
	printf("Lib src: %s\n\n\n", (char *)memmove(libsrc, libsrc+3, n));
	free(src);
	free(libsrc);
}