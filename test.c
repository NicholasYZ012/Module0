#include <stdio.h>
#include "libft.h"

int main(){
	char src[] = "pineapple";
	char dest[] = "appl";
	printf("%s", (char *)ft_memcpy(dest, src, 4));
}