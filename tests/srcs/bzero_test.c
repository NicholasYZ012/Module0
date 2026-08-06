#include "libtests.h"

void bzero_test(void *s, size_t n){
	char *s1;
	char *s2;

	s1 = ft_strdup((char *)s);
	s2 = ft_strdup((char *)s);
	int size = ft_strlen(s1);
	ft_bzero(s1, n);
	bzero(s2, n);
	putstr("~~~~BZERO TEST~~~~");
	printf("ori: %s\n", (char *)s);
	printf("### AFTER BZERO ###\nMINE\n");
	for (int i = 0; i < size; i++)
		printf("%d ", s1[i]);
	putstr("");
	printf("LIB\n");
	for (int i = 0; i < size; i++)
		printf("%d ", s2[i]);
	putstr("\n\n");
	free(s1);
	free(s2);
}
