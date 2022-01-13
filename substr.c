#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	//substr
	//s == NULL -> ?
	printf("substr-------------------------------------\n");
	char *ans1;
	char *ans2;
	char *ex1;
	char *ex2;
	ans1 = ft_substr("akiyama", 2, 3);
	ans2 = ft_substr("akiyama", 2, 20);
	ex1 = ft_substr("akiyama", 7, 5);
	ex2 = ft_substr(0, 5, 5);
	printf("ft_substr(\"akiyama\", 2, 3):%s\n", ans1);
	printf("ft_substr(\"akiyama\", 2, 20):%s\n", ans2);
	printf("ft_subsrr(\"akiyama\", 7, 5):%s\n", ex1);
	printf("ft_substr(0, 5, 5):%s\n", ex2);

	free(ans1);
	free(ans2);
	free(ex1);
	free(ex2);
}
