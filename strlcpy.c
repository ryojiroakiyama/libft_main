#include "main.h"

int main(void)
{
	//strlcpy
	//destsize over dstlen -> compile error
	//dst == NULL || src == NULL -> segf
	//consider about src == NULL because unit-test
	printf("strlcpy---------------------------------------\n");
	char s8_1[] = "akiyama";
//	char s8_2[] = "akiyama";
	char s8_3[] = "akiyama";
	char s8_4[] = "akiyama";
//	char s8_5[] = "aki";
//	char s8_11[] = "akiyama";
	printf("strlcpy:%lu:%s\n", strlcpy(s8_1, "1234567", 4), s8_1);
//	printf("strlcpy:%lu:%s\n", strlcpy(s8_2, "1234567", 20), s8_2);
	printf("strlcpy:%lu:%s\n", strlcpy(s8_3, "1234567", 0), s8_3);
	printf("strlcpy:%lu:%s\n", strlcpy(s8_4, "123", 5), s8_4);
//	printf("strlcpy:%lu:%s\n", strlcpy(s8_5, "123456789", 8), s8_5);
//	printf("strlcpy:%lu\n", strlcpy(0, "123", 5));
//	printf("strlcpy:%lu:%s\n", strlcpy(s8_11, 0, 5), s8_11);
//	printf("strlcpy:%lu\n", strlcpy(0, 0, 5));

	char s8_6[] = "akiyama";
//	char s8_7[] = "akiyama";
	char s8_8[] = "akiyama";
	char s8_9[] = "akiyama";
//	char s8_10[] = "aki";
	printf("ft_strlcpy:%lu:%s\n", ft_strlcpy(s8_6, "1234567", 4), s8_6);
//	printf("ft_strlcpy:%lu:%s\n", ft_strlcpy(s8_7, "1234567", 20), s8_7);
	printf("ft_strlcpy:%lu:%s\n", ft_strlcpy(s8_8, "1234567", 0), s8_8);
	printf("ft_strlcpy:%lu:%s\n", ft_strlcpy(s8_9, "123", 5), s8_9);
//	printf("ft_strlcpy:%lu:%s\n", ft_strlcpy(s8_10, "123456789", 8), s8_10);
}
