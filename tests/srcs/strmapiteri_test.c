#include "libtests.h"

char func(unsigned int n, char c)
{
	n = 0;
	if (ft_isalpha(c) && n == 0)
		return (ft_toupper(c));
	return (c);
}

void func1(unsigned int n, char *s)
{
	n = 0;
	if (ft_isalpha(*s) && n == 0)
		*s = ft_toupper(*s);
}

void strmapiteri_test(char *s1)
{
	putstr("~~~~STRMAPI TEST~~~~");
	printf("ori: %s\n", s1);
	printf("address: %p\n", &s1);
	putstr("f: turns lower char to upper");
	char *mapi = ft_strmapi(s1, func);
	putstr("\n### AFTER STRMAPI ###");
	printf("ori: %s\n", s1);
	printf("ori address: %p\n", &s1);
	printf("strmapi returns: %s\n", mapi);
	printf("strmapi address: %p\n\n", &mapi);
	free(mapi);

	char *s2 = ft_strdup(s1);
	putstr("~~~~STRMAPI TEST~~~~");
	printf("ori: %s\n", s2);
	printf("address: %p\n", &s2);
	putstr("f: turns lower char to upper");
	ft_striteri(s2, func1);
	putstr("\n### AFTER STRITERI ###");
	printf("ori: %s\n", s2);
	printf("address: %p\n\n\n", &s2);
	free(s2);
}