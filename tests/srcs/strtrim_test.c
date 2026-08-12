#include "libtests.h"

void strtrim_test(const char *s1, const char *set)
{
	putstr("~~~~STRTRIM TEST~~~~");
	printf("ori: %s\n", s1);
	char *trimmed = ft_strtrim(s1, set);
	printf("To trim: ");
	for (int i = 0; set[i]; i++)
		printf("%c ", set[i]);
	putstr("");
	printf("ascii to trim: ");
	for (int i = 0; set[i]; i++)
		printf("%d ", set[i]);
	putstr("");
	printf("Trimmed: #%s#\n", trimmed);
	printf("Trimmed in ascii: ");
	for (size_t i = 0; i <= ft_strlen(trimmed); i++)
		printf("%d ", trimmed[i]);
	putstr("\n\n");
	free(trimmed);
}