#include "main.h"

int main(void)
{
	//itoa
	printf("itoa----------------------------------------\n");
	char *str1;
	str1 = ft_itoa(-2147483648);
	printf("-2147483648:%s\n", str1);
	free(str1);
	str1 = ft_itoa(-1);
	printf("-1:%s\n", str1);
	free(str1);
	str1 = ft_itoa(0);
	printf("0:%s\n", str1);
	free(str1);
	str1 = ft_itoa(1);
	printf("1:%s\n", str1);
	free(str1);
	str1 = ft_itoa(2147483647);
	printf("2147483647:%s\n", str1);
	free(str1);
}
