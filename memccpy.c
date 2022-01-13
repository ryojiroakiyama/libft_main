#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//memccpy
	//dst == NULL || src == NULL -> segf
	//oversize n -> compile error
	printf("memccpy-------------------------------------\n");
	char s4_1[] = "akiyama";
	char s4_2[] = "akiyama";
	char str3[] = "akiyama";
	printf("memccpy:%s:%s:%s:%s\n", memccpy(s4_1, "12345", '2', 4), s4_1, memccpy(s4_2, "12345", '5', 4), s4_2);
	printf("memccpy:%s:%s\n", memccpy(str3, "12345", '2', 0), str3);
	
	char s4_3[] = "akiyama";
	char s4_4[] = "akiyama";
	char str4[] = "akiyama";
	printf("ft_memccpy:%s:%s:%s:%s\n", ft_memccpy(s4_3, "12345", '2', 4), s4_3, ft_memccpy(s4_4, "12345", '5', 4), s4_2);
	printf("ft_memccpy:%s:%s\n", ft_memccpy(str4, "12345", '2', 0), str4);
}
