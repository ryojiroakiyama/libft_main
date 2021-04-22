#include "main.h"

int	main(void)
{
	//memset
	//oversize n || n == 0 || b + sizeof(b) or more -> compile error
	//b = NULL -> segf
	//not understand behavoir when int argument, but man saying b is string and mypro's behavoir matches original
	printf("memset-------------------------------------\n");
//	int	nb[] = {11, 222, 3333};
//	memset(nb, 4, 3);
//	printf("%d:%d:%d\n", nb[0], nb[1], nb[2]);
	char s1_1[] = "akiyama";
	printf("memset:%s:%s\n", memset(s1_1 + 2, '@', 3), s1_1);

//	int	nb1[] = {11, 222, 3333};
//	ft_memset(nb1, 4, 3);
//	printf("%d:%d:%d\n", nb1[0], nb1[1], nb1[2]);
	char s1_2[] = "akiyama";
	printf("ft_memset:%s:%s\n", ft_memset(s1_2 + 2, '@', 3), s1_2);
}
