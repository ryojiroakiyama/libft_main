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

int main(void)
{
	//memset/not consider about oversize n
	printf("memset-------------------------------------\n");
	char s1_1[] = "akiyama";
	printf("memset:%s:%s\n", memset(s1_1 + 2, '@', 3), s1_1);
	char s1_2[] = "akiyama";
	printf("ft_memset:%s:%s\n", ft_memset(s1_2 + 2, '@', 3), s1_2);
	
	//bzero/not consider about oversize n
	printf("bzero-------------------------------------\n");
	char s2_1[] = "akiyama";
	bzero(s2_1 + 2, 3);
	printf("bzero:");
	put_honest(s2_1, 7);

	char s2_2[] = "akiyama";
	ft_bzero(s2_2 + 2, 3);
	printf("ft_bzero:");
	put_honest(s2_2, 7);

	//memcpy/restrct?/not consider about oversize n
	printf("memcpy-------------------------------------\n");
	char s3_1[] = "akiyama";
	char s3_2[] = "akiyama";
	printf("memcpy:%s:%s:", memcpy(s3_1, "12345", 4), memcpy(0, 0, 4));
	memcpy(s3_2, "ab\0de", 4);
	put_honest(s3_2, 7);
	
	char s3_3[] = "akiyama";
	char s3_4[] = "akiyama";
	printf("ft_memcpy:%s:%s:", ft_memcpy(s3_3, "12345", 4), ft_memcpy(0, 0, 4));
	ft_memcpy(s3_4, "ab\0de", 4);
	put_honest(s3_4, 7);

	//memccpy/not consider about oversize n
	printf("memccpy-------------------------------------\n");
	char s4_1[] = "akiyama";
	char s4_2[] = "akiyama";
	printf("memccpy:%s:%s:%s\n", memccpy(s4_1, "12345", '2', 4), s4_1, memccpy(s4_2, "12345", '5', 4));
	
	char s4_3[] = "akiyama";
	char s4_4[] = "akiyama";
	printf("ft_memccpy:%s:%s:%s\n", ft_memccpy(s4_3, "12345", '2', 4), s4_3, ft_memccpy(s4_4, "12345", '5', 4));
	
	//memmove/can't pass norm/not consider about oversize n
	printf("memmove---------------------------------------\n");
	char str5_1[] = "a\0kiyama";
	memmove(str5_1 + 2, str5_1, 3);
	printf("memmove:");
	put_honest(str5_1, 7);
	printf("memmove:%s:%s\n", memmove("akiyama", "akiyama", 3), memmove("akiyama", "akiyama", 0));

	char str5_2[] = "a\0kiyama";
	ft_memmove(str5_2 + 2, str5_2, 3);
	printf("ft_memmove:");
	put_honest(str5_2, 7);
//	printf("ft_memmove:%s\n", ft_memmove("akiyama", "akiyama", 0));
	printf("ft_memmove:%s:%s\n", ft_memmove("akiyama", "akiyama", 3), ft_memmove("akiyama", "akiyama", 0));

	//memchr/not consider about oversize n
	printf("memchr---------------------------------------\n");
	printf("memchr:%s:%s\n", memchr("akiyama", 'i', 4), memchr("akiyama", 'x', 4));
	
	printf("ft_memchr:%s:%s\n", ft_memchr("akiyama", 'i', 4), ft_memchr("akiyama", 'x', 4));
	
	//memcmp/not consider about oversize n
	printf("memcmp----------------------------------------\n");
	printf("memcmp:%d:%d\n", memcmp("akiyama", "akiYama", 6), memcmp("akiyama", "akiyama", 6));
//	printf("memcmp:%d\n", memcmp("\200", "\0", 1));
//	printf("%d\n", '\2');
//	printf("%d\n", '\20');
//	printf("%d\n", '\200');
//	printf("\200\n");
	printf("ft_memcmp:%d:%d\n", ft_memcmp("akiyama", "akiYama", 6), ft_memcmp("akiyama", "akiyama", 6));
//	printf("ft_memcmp:%d\n", ft_memcmp("\200", "\0", 1));
	
	//strlen
	printf("strlen----------------------------------------\n");
	printf("strlen:%lu\n", strlen("akiyama"));
	printf("ft_strlen:%lu\n", ft_strlen("akiyama"));
	
	//strlcpy/not consider about destsize over dstlen
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
	
	//strlcat
	printf("strlcat---------------------------------------\n");
	char str9_1[20] = "akiyama";
	char str9_2[] = "akiyama";
	printf("strlcat:%lu:%s\n", strlcat(str9_1, "ryojiro", 12), str9_1);
	printf("strlcat:%lu:%s\n", strlcat(str9_2, "ryojiro", 5), str9_2);
	
	char str9_3[20] = "akiyama";
	char str9_4[] = "akiyama";
	printf("ft_strlcat:%lu:%s\n", ft_strlcat(str9_3, "ryojiro", 12), str9_3);
	printf("ft_strlcat:%lu:%s\n", ft_strlcat(str9_4, "ryojiro", 5), str9_4);
	
	//strchr
	printf("strchr-----------------------------------------\n");
	printf("strchr:%s:%s:%s\n", strchr("akiyama", '\0'), strchr("akiyama", 'x'), strchr("akiyama", 'i'));
	printf("ft_strchr:%s:%s:%s\n", ft_strchr("akiyama", '\0'), ft_strchr("akiyama", 'x'), ft_strchr("akiyama", 'i'));

	//strrchr
	printf("strrchr----------------------------------------\n");
	printf("strrchr:%s:%s:%s\n", strrchr("akiyama", '\0'), strrchr("akiyama", 'x'), strrchr("akiyama", 'a'));
	printf("ft_strrchr:%s:%s:%s\n", ft_strrchr("akiyama", '\0'), ft_strrchr("akiyama", 'x'), ft_strrchr("akiyama", 'a'));

	//strnstr
	printf("strnstr----------------------------------------\n");
	printf("strnstr:%s:%s:%s:%s\n", strnstr("akiyama", "kiy", 20), strnstr("akiyama", "kiy", 3), strnstr("akiyama", "abc", 20), strnstr("akiyama", "\0", 5));

	printf("ft_strnstr:%s:%s:%s:%s\n", ft_strnstr("akiyama", "kiy", 20), ft_strnstr("akiyama", "kiy", 3), ft_strnstr("akiyama", "abc", 20), ft_strnstr("akiyama", "\0", 5));

	//strncmp
	printf("strncmp----------------------------------------\n");
	printf("strncmp:%d:%d:%d:%d\n", strncmp("akiyama", "akiYama", 6), strncmp("aki", "akiyama", 20), strncmp("akiyama", "akiyama", 20), strncmp("akiYama", "akiyama", 20));
	
	printf("ft_strncmp:%d:%d:%d:%d\n", ft_strncmp("akiyama", "akiYama", 6), ft_strncmp("aki", "akiyama", 20), ft_strncmp("akiyama", "akiyama", 20), strncmp("akiYama", "akiyama", 20));

	//atoi
	printf("atoi----------------------------------------------\n");
	printf("atoi:%d:%d:%d\n", atoi("+004324"), atoi("-43"), atoi("6543.vkd"));
	printf("atoi:%d:%d:%d\n", atoi("+-4324"), atoi(" \n 43"), atoi("v54kd"));
	printf("atoi:(x<llong)%d:(llong<x)%d:(abc)%d\n", atoi("-9223372036854775808"), atoi("9223372036854775808"), atoi("abc"));
	printf("atoi:(long<x<int)%d:(int<x<long)%d:\n", atoi("-9223372036854775800"), atoi("9223372036854775800"));

	printf("ft_atoi:%d:%d:%d\n", ft_atoi("+004324"), ft_atoi("-43"), ft_atoi("6543.vkd"));
	printf("ft_atoi:%d:%d:%d\n", ft_atoi("+-4324"), ft_atoi(" \n 43"), ft_atoi("v54kd"));
	printf("ft_atoi:(x<llong)%d:(llong<x)%d:(abc)%d\n", ft_atoi("-9223372036854775808"), ft_atoi("9223372036854775808"), ft_atoi("abc"));
	printf("ft_atoi:(long<x<int)%d:(int<x<long)%d:\n", ft_atoi("-9223372036854775800"), ft_atoi("9223372036854775800"));

	//isalpha
	printf("isalpha----------------------------------------\n");
	printf("isalpha:%d:%d:%d\n", isalpha('d'), isalpha('+'), isalpha('H'));
	printf("ft_isalpha:%d:%d:%d\n", ft_isalpha('d'), ft_isalpha('+'), ft_isalpha('H'));

	//isdigit
	printf("isdigit----------------------------------------\n");
	printf("isdigit:%d:%d:%d\n", isdigit('4'), isdigit('+'), isdigit('H'));
	printf("ft_isdigit:%d:%d:%d\n", ft_isdigit('4'), ft_isdigit('+'), ft_isdigit('H'));
	
	//isalnum
	printf("isalnum----------------------------------------\n");
	printf("isalnum:%d:%d:%d\n", isalnum('4'), isalnum('+'), isdigit('H'));
	printf("ft_isalnum:%d:%d:%d\n", ft_isalnum('4'), ft_isalnum('+'), isdigit('H'));
	
	//isascii
	printf("isascii----------------------------------------\n");
	printf("isascii:%d:%d:%d\n", isascii('\n'), isascii(-42), isascii(128));
	printf("ft_isascii:%d:%d:%d\n", ft_isascii('\n'), ft_isascii(-42), ft_isascii(128));
//	printf("isascii:%d:%d:%d:%d\n", isascii('\n'), isascii(-42), isascii(128), isascii('ｱ'));
//	printf("ft_isascii:%d:%d:%d:%d\n", ft_isascii('\n'), ft_isascii(-42), ft_isascii(128), ft_isascii('ｱ'));

	//isprint
	printf("isprint----------------------------------------\n");
	printf("isprint:%d:%d:%d:%d\n", isprint('\0'), isprint(31), isprint(127), isprint('@'));
	printf("ft_isprint:%d:%d:%d:%d\n", ft_isprint('\0'), ft_isprint(31), ft_isprint(127), ft_isprint('@'));

	//toupper
	printf("toupper----------------------------------------\n");
	printf("toupper:%c:%c:%c:%c\n", toupper('~'), toupper('a'), toupper('H'), toupper('z'));
	printf("ft_toupper:%c:%c:%c:%c\n", ft_toupper('~'), ft_toupper('a'), ft_toupper('H'), ft_toupper('z'));
	
	//tolower
	printf("tolower----------------------------------------\n");
	printf("tolower:%c:%c:%c:%c\n", tolower('~'), tolower('A'), tolower('h'), tolower('Z'));
	printf("ft_tolower:%c:%c:%c:%c\n", ft_tolower('~'), ft_tolower('A'), ft_tolower('h'), ft_tolower('Z'));

	//calloc/not consider about 0 argument/->NULL or 1/ 0 argument -> 1
	printf("calloc----------------------------------------\n");
	int *ans1;
	int i = -1;
	ans1 = (int *)calloc(10, sizeof(int));
	printf("calloc");
	while (++i < 10)
		printf(":%d", ans1[i]);
	printf("\n");
	free(ans1);

	int *ans1_1;
	i = -1;
	ans1_1 = (int *)calloc(0, 0);
	printf("calloc(0)");
	printf(":%p", ans1_1);
	printf("\n");
	free(ans1_1);
/*
	int *ans1_2;
	i = -1;
	ans1_2 = (int *)calloc(1, sizeof(int));
	printf("calloc(0,sizeof(int)):%d\n", ans1_2[0]);
	free(ans1_2);
*/
	int	*ans2;
	ans2 = (int *)ft_calloc(10, sizeof(int));
	i = -1;
	printf("ft_calloc");
	while (++i < 10)
		printf(":%d", ans2[i]);
	printf("\n");
	free(ans2);

	//strdup/errono?
	printf("strdup----------------------------------------\n");
	char *ans3;
	ans3 = strdup("akiyama");
	printf("strdup:%s\n", ans3);
	free(ans3);

	char *ans4;
	ans4 = ft_strdup("akiyama");
	printf("ft_strdup:%s\n", ans4);
	free(ans4);

	system("leaks a.out");
	return (0);
}
