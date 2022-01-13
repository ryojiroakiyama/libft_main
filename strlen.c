#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	//strlen
	//s == NULL -> segf
	printf("strlen----------------------------------------\n");
	printf("strlen:%lu\n", strlen("akiyama"));
	printf("ft_strlen:%lu\n", ft_strlen("akiyama"));
}
