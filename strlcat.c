#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	//strlcat
	printf("strlcat---------------------------------------\n");
	char str9_1[20] = "akiyama";
	char str9_2[] = "akiyama";
	printf("strlcat:%lu:%s\n", strlcat(str9_1, "ryojiro", 12), str9_1);
	printf("strlcat:%lu:%s\n", strlcat(str9_2, "ryojiro", 5), str9_2);
	
	char str9_3[20] = "akiyama";
	char str9_4[] = "akiyama";
	printf("ft_strlcat:%lu:%s\n", ft_strlcat(str9_3, "ryojiro", 12), str9_3);
	printf("ft_strlcat:%lu:%s\n", ft_strlcat(str9_4, "ryojiro", 5), str9_4);
}
