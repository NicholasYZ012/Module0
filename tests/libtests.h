#ifndef LIBTESTS_H
#define LIBTESTS_H
#include "../libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Part 1
void putstr(const char *str);
void memset_test(void *s, int c, size_t n);
void bzero_test(void *s, size_t n);
void memcpymove_test(void *dest, const void *src, size_t n);
void strlcpy_test(const char *s1, const char *s2, size_t n);
void strlcat_test(const char *s1, const char *s2, size_t dstsize, size_t catsize);
void touplower_test(void);
void strchrs_test(const char *s1, int c);
void strncmp_test(const char *s1, const char *s2, size_t n);
void memchr_test(const void *s, int c, size_t n);
void memcmp_test(const char *s1, const char *s2, size_t n);
void strnstr_test(const char *s1, const char *s2, size_t len);
void atoi_test(char *str);
void calloc_test(size_t n, size_t size);

// Part 2
void substr_test(const char *s, unsigned int start, size_t len);
void strjoin_test(const char *s1, const char *s2);
void strtrim_test(const char *s1, const char *set);
void split_test(const char *s1, char c);
void itoa_test(int n);

#endif