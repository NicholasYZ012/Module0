#include "libtests.h"

void memset_test(void *s, int c, size_t n){
	char *s1;
	char *s2;

	s1 = ft_strdup((char *)s);
	s2 = ft_strdup((char *)s);
	putstr("~~~~MEMSET TEST~~~~");
	putstr("This test also uses ft_strdup so it can be considered its test");
	printf("ori: %s\n", (char *)s);
	printf("### AFTER MEMSET ###\nMine: %s\n", (char *)ft_memset(s1, c, n));
	printf("Lib: %s\n\n\n", (char *)memset(s2, c, n));
	free(s1);
	free(s2);
}
