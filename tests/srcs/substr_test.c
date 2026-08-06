#include "libtests.h"

void substr_test(const char *s, unsigned int start, size_t len)
{
    char *sub = ft_substr(s, start, len);
    putstr("~~~~SUBSTR TEST~~~~");
    printf("ori: %s\nstarting index: %u\nsubstr len: %ld\n", s, start, len);
    printf("Substring in int: ");
    for (size_t i = 0; i < len; i++)
		printf("%d ", sub[i]);
        putstr("");
    printf("Substring in ascii: ");
    for (size_t i = 0; i < len; i++)
		printf("%c", sub[i]);
    putstr("\n\n");
    free(sub); 
}