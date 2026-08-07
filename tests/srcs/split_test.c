#include "libtests.h"

void split_test(const char *s1, char c)
{
	putstr("~~~~SPLIT TEST~~~~");
	char **arr = ft_split(s1, c);
	printf("ori: %s\ndelimiter: %c\n", s1, c);
	putstr("Split words");
	for (int i = 0; arr[i]; i++)
		printf("word %d: %s\n", i + 1, arr[i]);
	putstr("\n");
	free(*arr);
	free(arr);
}