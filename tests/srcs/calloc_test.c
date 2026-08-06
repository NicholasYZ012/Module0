#include "libtests.h"

void calloc_test(size_t n, size_t size)
{
	size_t total = n * size;

	putstr("~~~~CALLOC TEST~~~~");
	char *mycal = ft_calloc(n, size);
	char *libcal = calloc(n , size);
	printf("Total size to calloc: %ld\n", total);
	printf("Number of members: %ld\n", n);
	putstr("### MY CALLOC ###");
	for (size_t i = 0; i < n; i++)
		printf("%d ", mycal[i]);
	putstr("");
	putstr("### LIB CALLOC ###");
	for (size_t i = 0; i < n; i++)
		printf("%d ", libcal[i]);
	putstr("\n\n");
	free(mycal);
	free(libcal);
}