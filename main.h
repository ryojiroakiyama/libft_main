#ifndef MAIN_H
# define MAIN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft/libft.h"

void put_honest(char *str, int len)
{
	int i = -1;
	while (++i < len)
		printf("%c", str[i]);
	printf("\n");
}

char	ft_toup(unsigned int n, char c)
{
	if (n % 2)
	{
		if (97 <= c && c <= 122)
			return (c - 32);
	}
	return (c);
}

#endif
