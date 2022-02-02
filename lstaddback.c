#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	*def_content = strdup("default content");
	char	*add_content = strdup("added content");
	t_list	*def = ft_lstnew(def_content);
	t_list	*add = ft_lstnew(add_content);

	ft_lstadd_back(&def, add);
	printf("first content->%s\n", (char*)def->content);
	printf("next content->%s\n", (char*)def->next->content);

	ft_lstclear(&def, free);
	if (system("leaks -q a.out > /dev/null"))
	    system("leaks -q a.out");
	return (0);
}
