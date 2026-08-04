#ifndef LIBTESTS_H
# define LIBTESTS_H
#include "../libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void putstr(const char *str);
void strlcat_test(const char *s1, const char *s2, size_t dstsize, size_t catsize);
void touplower_test(void);
void strchrs_test(const char *s1, int c);
void strncmp_test(const char *s1, const char *s2, size_t n);
void memcmp_test(const char *s1, const char *s2, size_t n);
void strnstr_test(const char *s1, const char *s2, size_t len);

#endif