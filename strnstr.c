#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	//strnstr
	printf("strnstr----------------------------------------\n");
	printf("strnstr:%s:%s:%s:%s\n", strnstr("akiyama", "kiy", 20), strnstr("akiyama", "kiy", 3), strnstr("akiyama", "abc", 20), strnstr("akiyama", "\0", 5));
	printf("%s\n", strnstr(NULL, "kiy", 0));
	printf("%s\n", strnstr("akiyama", "kiy", 0));
	printf("%s\n", strnstr("akiyama", "", 0));
//	printf("%s\n", strnstr(NULL, "kiy", 1));

	printf("ft_strnstr:%s:%s:%s:%s\n", ft_strnstr("akiyama", "kiy", 20), ft_strnstr("akiyama", "kiy", 3), ft_strnstr("akiyama", "abc", 20), ft_strnstr("akiyama", "\0", 5));
	printf("%s\n", ft_strnstr(NULL, "kiy", 0));
	printf("%s\n", ft_strnstr("akiyama", "kiy", 0));
	printf("%s\n", ft_strnstr("akiyama", "", 0));
//	printf("%s\n", ft_strnstr(NULL, "kiy", 1));
}
