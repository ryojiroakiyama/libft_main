#include "main.h"

int main(void)
{
	//strmapi
	printf("strmapi-------------------------------------\n");
	char *str2;
	char (*f)(unsigned int, char);
	f = ft_toup;
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
