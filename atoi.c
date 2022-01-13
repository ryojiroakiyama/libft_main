#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	//atoi
	printf("atoi----------------------------------------------\n");
	printf("atoi:%d:%d:%d\n", atoi("+004324"), atoi("-43"), atoi("6543.vkd"));
	printf("atoi:%d:%d:%d\n", atoi("+-4324"), atoi(" \n 43"), atoi("v54kd"));
	printf("atoi:(x<llong)%d:(llong<x)%d:(abc)%d\n", atoi("-9223372036854775809"), atoi("9223372036854775808"), atoi("abc"));
	printf("atoi:(x<llong)%d:(llong<x)%d\n", atoi("-92233720368547758095"), atoi("92233720368547758085"));
	printf("atoi:(long<x<int)%d:(int<x<long)%d\n", atoi("-9223372036854775800"), atoi("9223372036854775800"));
	printf("atoi:(x==longmin)%d:(x==longmax)%d\n", atoi("-9223372036854775808"), atoi("9223372036854775807"));

	printf("ft_atoi:%d:%d:%d\n", ft_atoi("+004324"), ft_atoi("-43"), ft_atoi("6543.vkd"));
	printf("ft_atoi:%d:%d:%d\n", ft_atoi("+-4324"), ft_atoi(" \n 43"), ft_atoi("v54kd"));
	printf("ft_atoi:(x<llong)%d:(llong<x)%d:(abc)%d\n", ft_atoi("-9223372036854775809"), ft_atoi("9223372036854775808"), ft_atoi("abc"));
	printf("ft_atoi:(x<llong)%d:(llong<x)%d\n", ft_atoi("-92233720368547758095"), ft_atoi("92233720368547758085"));
	printf("ft_atoi:(long<x<int)%d:(int<x<long)%d\n", ft_atoi("-9223372036854775800"), ft_atoi("9223372036854775800"));
	printf("ft_atoi:(x==longmin)%d:(x==longmax)%d\n", ft_atoi("-9223372036854775808"), ft_atoi("9223372036854775807"));
}
