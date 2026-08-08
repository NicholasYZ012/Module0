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

	// memset_test("iliketoreadcode", -3, 5);
	// bzero_test("iliketoreadcode", 10);
	// memcpymove_test("PINEAPPLE", "pineapple", 4);
	// strlcpy_test("pop", "abc", 2);
	// strlcat_test("apple", "pine", 10, 7);
	// touplower_test();
	// strchrs_test("elephant", '\0');
	// memchr_test("applepineapple", 'n', 10);
	// strncmp_test("apple", "appl", 5);
	// memcmp_test("ling", "l", 1);
	// strnstr_test("applepineapple", "eapp", 8);
	// atoi_test("(ain0awds");
	// calloc_test(9, sizeof(int));

	putstr("@@@@@@@@@@@@@@");
	putstr("@@@ PART 2 @@@");
	putstr("@@@@@@@@@@@@@@\n");

	// substr_test("animalballs", 1, 20);
	// strjoin_test(" ", " ");
	// strtrim_test("abcHelloabcWorldabc ", "abc");
	// split_test("", 'c');
	// itoa_test(-109989876);
	// strmapiteri_test("appleBOY123");
	// fd_test(NULL, 2);

	putstr("@@@@@@@@@@@@@@");
	putstr("@@@ PART 3 @@@");
	putstr("@@@@@@@@@@@@@@\n");

	char **ayat = ft_split("abc", ' ');

	t_list *list = NULL;
	for (int i = 0; ayat[i]; i++)
	{
		ft_lstadd_back(&list, ft_lstnew(ft_strdup(ayat[i])));
		ft_lstadd_front(&list, ft_lstnew(ft_strdup(ayat[i])));
	}
	printf("List size: %d\n", ft_lstsize(list));
	putstr("### LSTITER TEST ###");
	ft_lstiter(list, putstr);

	putstr("### LSTMAP TEST ###");
	t_list *map = ft_lstmap(list, proc, free);
	ft_lstiter(map, putstr);
	
	ft_lstclear(&list, free);
	ft_lstclear(&map, free);
	for (int i = 0; ayat[i]; i++)
		free(ayat[i]);
	free(ayat);
}
