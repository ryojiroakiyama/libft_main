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

	//strjoin
	//NULL?
	printf("strjoin-------------------------------------\n");
	char *ans3;
	char *ans4;
	char *ans3_1;
	char *ans3_2;
	char *ans3_3;
	ans3 = ft_strjoin("akiyama", "ryojiro");
	ans4 = ft_strjoin(0, "ryojiro");
	ans3_1 = ft_strjoin("akiyama", 0);
	ans3_2 = ft_strjoin(0, 0);
	ans3_3 = ft_strjoin("\0", "ryojiro");
	printf("ft_strjoin(\"akiyama\", \"ryojiro\"):%s\n", ans3);
	printf("ft_strjoin(0, \"ryojiro\"):%s\n", ans4);
	printf("ft_strjoin(\"akiyama\", 0):%s\n", ans3_1);
	printf("ft_strjoin(0, 0);%s\n", ans3_2);
	printf("ft_strjoin(\"\\0\", \"ryojiro\"):%s\n", ans3_3);

	free(ans3);
	free(ans4);
	free(ans3_1);
	free(ans3_2);
	free(ans3_3);

	//strtrim
	//NULL?
	printf("strtrim-------------------------------------\n");
	char *ans5;
	char *ans6;
	char *ans7;
	char *ex5;
	char *ex6;
	char *ex7;
	ans5 = ft_strtrim("akiyama", "am");
	ans6 = ft_strtrim("akiyama", "chz");
	ans7 = ft_strtrim("akiyama", "akiyama");
	ex5 = ft_strtrim(0, "abc");
	ex6 = ft_strtrim("abc", 0);
	ex7 = ft_strtrim("akiyama", "\0");
	printf("ft_strtrim(\"akiyama\", \"am\"):%s\n", ans5);
	printf("ft_strtrim(\"akiyama\", \"chz\"):%s\n", ans6);
	printf("ft_strtrim(\"akiyama\", \"akiyama\"):%s\n", ans7);
	printf("ft_strtrim(0, \"abc\"):%s\n", ex5);
	printf("ft_strtrim(\"abc\", 0):%s\n", ex6);
	printf("ft_strtrim(\"akiyama\", \"\\0\"):%s\n", ex7);

	free(ans5);
	free(ans6);
	free(ans7);
	free(ex5);
	free(ex6);
	free(ex7);

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
	//putchar_fd
	printf("putchar_fd----------------------------------\n");
	int fd = 1;
	write(fd, "a:", 2);
	ft_putchar_fd('a', fd);
	write(fd, "\n", 1);

	//putstr_fd
	printf("putstr_fd----------------------------------\n");
	write(fd, "akiyama:", ft_strlen("akiyama:"));
	ft_putstr_fd("akiyama", fd);
	write(fd, "\n", 1);

	write(fd, "str == NULL:", ft_strlen("str == NULL:"));
	ft_putstr_fd(0, fd);
	write(fd, "\n", 1);

	//putendl_fd
	printf("putendl_fd----------------------------------\n");
	ft_putendl_fd("akiyama", fd);
	write(fd, "\n", 1);
	
	write(fd, "str == NULL:", ft_strlen("str == NULL:"));
	ft_putendl_fd(0, fd);
	write(fd, "\n", 1);

	//putnbr_fd
	printf("putnbr_fd----------------------------------\n");
	write(fd, "-2147483648:", ft_strlen("-2147483648:"));
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);

	write(fd, "-1:", ft_strlen("-1:"));
	ft_putnbr_fd(-1, fd);
	write(fd, "\n", 1);

	write(fd, "0:", ft_strlen("0:"));
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);

	write(fd, "1:", ft_strlen("1:"));
	ft_putnbr_fd(1, fd);
	write(fd, "\n", 1);
	
	write(fd, "2147483647:", ft_strlen("2147483647:"));
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);

	system("leaks a.out");
	return (0);
}
