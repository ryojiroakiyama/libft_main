#include "main.h"

int	main(void)
{
	//memcmp
	//dst == NULL || src == NULL -> segf
	printf("memcmp----------------------------------------\n");
	printf("memcmp:%d:%d:%d\n", memcmp("akiyama", "akiYama", 6), memcmp("akiyama", "akiyama", 6), memcmp("#fjsdk", "~", 4));
	printf("memcmp:%d:%d\n", memcmp("akiyama", "akiyama", 20), memcmp("akiyama", "ryojiro", 0));
//	printf("memcmp:%d\n", memcmp("\200", "\0", 1));
//	printf("%d\n", '\2');
//	printf("%d\n", '\20');
//	printf("%d\n", '\200');
//	printf("\200\n");
	printf("ft_memcmp:%d:%d:%d\n", ft_memcmp("akiyama", "akiYama", 6), ft_memcmp("akiyama", "akiyama", 6), ft_memcmp("#fjsdk", "~", 4));
	printf("ft_memcmp:%d:%d\n", ft_memcmp("akiyama", "akiyama", 20), ft_memcmp("akiyama", "ryojiro", 0));
//	printf("ft_memcmp:%d\n", ft_memcmp("\200", "\0", 1));
}
