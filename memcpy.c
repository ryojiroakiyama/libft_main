#include "main.h"

int	main(void)
{
	//memcpy
	//oversize n -> compile error
	//(dst == NULL && src != NULL) || (dst != NULL && src == NULL) -> segf
	//dst == NULL && src == NULL -> NULL
	//for some reason buss error or trace buck when first arguments is direct strings not adress
	printf("memcpy-------------------------------------\n");
	char s3_1[] = "akiyama";
	char s3_2[] = "akiyama";
	char str1[] = "akiyama";
	printf("memcpy:%s:%s:%s:", memcpy(s3_1, "12345", 4), memcpy(0, 0, 4), memcpy(str1, "12345", 0));
	memcpy(s3_2, "ab\0de", 4);
	put_honest(s3_2, 7);
	
	char s3_3[] = "akiyama";
	char s3_4[] = "akiyama";
	char str2[] = "akiyama";
	printf("ft_memcpy:%s:%s:%s:", ft_memcpy(s3_3, "12345", 4), ft_memcpy(0, 0, 4), ft_memcpy(str2, "12345", 0));
	ft_memcpy(s3_4, "ab\0de", 4);
	put_honest(s3_4, 7);
}
