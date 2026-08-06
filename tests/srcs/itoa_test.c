#include "libtests.h"

void itoa_test(int n){
	putstr("~~~~ITOA TEST~~~~");
	printf("int: %d\nascii: %s\n\n\n", n, ft_itoa(n));
}