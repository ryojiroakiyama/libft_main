#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void put_all_tolen(char *str, int len)
{
	int i = -1;
	while (++i < len)
		printf("%c", str[i]);
	printf("\n");
}

int	main(void)
{
	//bzero
	//same memset
	printf("bzero-------------------------------------\n");
	char s2_1[] = "akiyama";
	bzero(s2_1 + 2, 3);
	printf("bzero:");
	put_all_tolen(s2_1, 7);

	char s2_2[] = "akiyama";
	ft_bzero(s2_2 + 2, 3);
	printf("ft_bzero:");
	put_all_tolen(s2_2, 7);
}
