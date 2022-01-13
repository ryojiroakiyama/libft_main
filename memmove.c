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
	//memmove
	//(dst == NULL && src != NULL) || (dst != NULL && src == NULL) -> segf
	//dst == NULL && src == NULL -> NULL
	printf("memmove---------------------------------------\n");

	//NULL char
	char s1[] = "a\0kiyama";
	memmove(s1 + 2, s1, 3);
	printf("memmove:");
	put_all_tolen(s1, 7);
	
	char s2[] = "a\0kiyama";
	ft_memmove(s2 + 2, s2, 3);
	printf("ft_memmove:");
	put_all_tolen(s2, 7);

	//normal
	char s4[] = "akiyama";
	char s3[] = "akiyama";
	printf("memmove:%s:%s\n", memmove(s4, "ryojiro", 3), memmove(s3, s3 + 2, 3));

	char s6[] = "akiyama";
	char s5[] = "akiyama";
	printf("ft_memmove:%s:%s\n", ft_memmove(s6, "ryojiro", 3), ft_memmove(s5, s5 + 2, 3));

	//abnormal
	char s7[] = "akiyama";
	char s8[] = "akiyama";
	char s9[] = "akiyama";
	char s10[] = "akiyama";
	printf("memmove:%s:%s:%s\n", memmove(s7, "akiyama", 3), memmove(s8, "akiyama", 0), memmove(0, 0, 3));
	printf("ft_memmove:%s:%s:%s\n", ft_memmove(s9, "akiyama", 3), ft_memmove(s10, "akiyama", 0), ft_memmove(0, 0, 3));
}
