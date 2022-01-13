#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	//split
	//NULL?
	printf("split---------------------------------------\n");
	char	**ans8;
	int		i;
	ans8 = ft_split("111aki1yama11ryo111jiro1111", '1');
	printf("ft_split(\"111aki1yama11ryo111jiro1111\", '1'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);

	ans8 = ft_split("ggggggg", 'g');
	printf("ft_split(\"ggggggg\", 'g'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);

	ans8 = ft_split("ggggggg", 'a');
	printf("ft_split(\"ggggggg\", 'a'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);
	
	ans8 = ft_split("", 'a');
	printf("ft_split(\"\", 'a'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);

	ans8 = ft_split("abc", '\0');
	printf("ft_split(\"abc\", '\\0'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);
	
	ans8 = ft_split(0, 'a');
	printf("ft_split(0, 'a'):\n");
	i = 0;
	if (!ans8)
		printf("%p\n", ans8);
	else
	{
		while (1)
		{
			printf("[%d]:%s\n", i, ans8[i]);
			if (!ans8[i])
				break ;
			free(ans8[i]);
			i++;
		}
	}
	free(ans8);
}
