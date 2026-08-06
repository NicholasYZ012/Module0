#include "libtests.h"

void atoi_test(char *str)
{
	putstr("~~~~ATOI TEST~~~~");
	printf("str: %s\n", str);
	printf("### AFTER ATOI ###\nMine: %d\n", ft_atoi(str));
	printf("Lib: %d\n\n\n", atoi(str));

}