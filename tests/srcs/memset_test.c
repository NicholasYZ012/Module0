#include "libtests.h"

void memset_test(void *s, int c, size_t n){
	char *s1;
	char *s2;

	s1 = ft_strdup((char *)s);
	s2 = ft_strdup((char *)s);
	ft_memset(s1, c, n);
	memset(s2, c, n);
	putstr("~~~~MEMSET TEST~~~~");
	putstr("If empty string is passed, memset gives a buffer overflow error");
	putstr("This test also uses ft_strdup so it can be considered its test");
	printf("ori: %s\n", (char *)s);
	printf("### AFTER MEMSET ###\nMine\n");
	for (size_t i = 0; i < ft_strlen(s) + 1; i++)
		printf("%c ", s1[i]);
	putstr("");
	for (size_t i = 0; i < ft_strlen(s) + 1; i++)
		printf("%d ", s1[i]);
	putstr("");
	printf("Lib\n");
	for (size_t i = 0; i < ft_strlen(s) + 1; i++)
		printf("%c ", s2[i]);
	putstr("");
	for (size_t i = 0; i < ft_strlen(s) + 1; i++)
		printf("%d ", s2[i]);
	putstr("\n\n");
	free(s1);
	free(s2);
}
