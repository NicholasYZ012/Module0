#include "libtests.h"

void *proc(void *s1)
{
	int i = 0;
	char *s = (char *)s1;
	char *load = malloc((ft_strlen(s) + 1) * sizeof(char));

	while(s[i])
	{
		load[i] = s[i] + 3;
		i++;
	}
	load[i] = '\0';
	return (load);
}

int main(){

	putstr("@@@@@@@@@@@@@@");
	putstr("@@@ PART 1 @@@");
	putstr("@@@@@@@@@@@@@@\n");

	// memset_test("", 'p', 4);
	// bzero_test("apple", 7);
	// memcpymove_test("PINEAPPLE", "pineapple", 2);
	// strlcpy_test("blab", "", 4);
	// strlcat_test("apple", "", 20, 6);
	// touplower_test();
	strchrs_test("elephante", '\0');
	// memchr_test("applepineapple", 'n', 3);
	// strncmp_test("apple", "apples", 6);
	// memcmp_test("ling", "l", 2);
	// strnstr_test("applepineapple", "ple", 20);
	// atoi_test("    +10923");
	// calloc_test(0, sizeof(int));

	putstr("@@@@@@@@@@@@@@");
	putstr("@@@ PART 2 @@@");
	putstr("@@@@@@@@@@@@@@\n");

	// substr_test("animal\0balls", 7, 4);
	// strjoin_test(" ", " ");
	strtrim_test("abc\0cba ", "abc");
	// split_test("", 'c');
	// itoa_test(-109989876);
	// strmapiteri_test("appleBOY123");
	// fd_test("niceadwdwdadwdaadwawawaswdawadwadadwaw", 2);

	putstr("@@@@@@@@@@@@@@");
	putstr("@@@ PART 3 @@@");
	putstr("@@@@@@@@@@@@@@\n");

	// char **ayat = ft_split("abc", ' ');

	// t_list *list = NULL;
	// for (int i = 0; ayat[i]; i++)
	// {
	// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup(ayat[i])));
	// 	ft_lstadd_front(&list, ft_lstnew(ft_strdup(ayat[i])));
	// }
	// printf("List size: %d\n", ft_lstsize(list));
	// putstr("### LSTITER TEST ###");
	// ft_lstiter(list, putstr);

	// putstr("### LSTMAP TEST ###");
	// t_list *map = ft_lstmap(list, proc, free);
	// ft_lstiter(map, putstr);
	
	// ft_lstclear(&list, free);
	// ft_lstclear(&map, free);
	// for (int i = 0; ayat[i]; i++)
	// free(ayat[i]);
	// free(ayat);
}
