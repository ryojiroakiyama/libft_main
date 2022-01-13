#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

char	toupper_odd(unsigned int n, char c)
{
	if (n % 2)
	{
		if (97 <= c && c <= 122)
			return (c - 32);
	}
	return (c);
}

int main(void)
{
	//strmapi
	printf("strmapi-------------------------------------\n");
	char *str2;
	char (*f)(unsigned int, char);
	f = toupper_odd;
	printf("ft_strmapi(\"akiyamaryojiro\", f)(to upper when odd):");
	str2 = ft_strmapi("akiyamaryojiro", f);
	printf("%s\n", str2);
	free(str2);

	char *str2_1;
	str2_1 = ft_strmapi(0, f);
	printf("ft_strmapi(0, f):%s\n", str2_1);
	free(str2_1);
/*
	char *str2_2;
	str2_2 = ft_strmapi("akiyama", 0);
	printf("ft_strmapi(0, f):%s\n", str2_2);
	free(str2_2);
*/
}
