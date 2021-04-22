#include "main.h"

int	main(void)
{
	//memchr
	//dst == NULL || src == NULL -> segf
	printf("memchr---------------------------------------\n");
	printf("memchr:%s:%s\n", memchr("akiyama", 'i', 4), memchr("akiyama", 'x', 4));
	
	printf("ft_memchr:%s:%s\n", ft_memchr("akiyama", 'i', 4), ft_memchr("akiyama", 'x', 4));
}
