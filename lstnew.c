#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	*content = strdup("newcontent");
	t_list	*t = ft_lstnew(content);

	printf("content->%s\n", (char*)t->content);
	printf("next->%p\n", t->next);

	ft_lstclear(&t, free);
	if (system("leaks -q a.out > /dev/null"))
	    system("leaks -q a.out");
	return (0);
}
