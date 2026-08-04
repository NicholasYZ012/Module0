/*
cc -Wall -Werror -Wextra test.c -L . -lft -lbsd -o test
*/
#include "libtests.h"

int main(){
	//strlcat_test("apple", "pine", 10, 7);
	//strchrs_test("elephant", '\0');
	//strncmp_test("apple", "appl", 5);
	//memcmp_test("ling", "l", 3);
	strnstr_test("applepineapple", "pp", 8);
}
