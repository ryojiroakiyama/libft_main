#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

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
	printf("substr-------------------------------------\n");
	char *ans1;
	char *ans2;
	char *exans;
	ans1 = ft_substr("akiyama", 2, 3);
	ans2 = ft_substr("akiyama", 2, 20);
	exans = ft_substr("akiyama", 7, 5);
	printf("ft_substr(\"akiyama\", 2, 3):%s\n", ans1);
	printf("ft_substr(\"akiyama\", 2, 20):%s\n", ans2);
	printf("ft_substr(0, 5, 5):%s\n", ft_substr(0, 5, 5));
	printf("ft_subsrr(\"akiyama\", 7, 5):%s\n", exans);

	free(ans1);
	free(ans2);
	free(exans);

	//strjoin
	printf("strjoin-------------------------------------\n");
	char *ans3;
	char *ans4;
	printf("ft_strjoin(0, \"ryojiro\"):%s\n", ft_strjoin(0, "ryojiro"));
	ans3 = ft_strjoin("akiyama", "ryojiro");
	ans4 = ft_strjoin("aki\0ama", "ryojiro");
	printf("ft_strjoin(\"akiyama\", \"ryojiro\"):%s\n", ans3);
	printf("ft_strjoin(\"aki\\0ama\", \"ryojiro\"):%s\n", ans4);

	free(ans3);
	free(ans4);

	//strtrim
	printf("strtrim-------------------------------------\n");
	char *ans5;
	char *ans6;
	char *ans7;
	printf("ft_strtrim(0, \"abc\"):%s\n", ft_strtrim(0, "abc"));
	ans5 = ft_strtrim("akiyama", "am");
	ans6 = ft_strtrim("akiyama", "chz");
	ans7 = ft_strtrim("akiyama", "akiyama");
	printf("ft_strtrim(\"akiyama\", \"am\"):%s\n", ans5);
	printf("ft_strtrim(\"akiyama\", \"chz\"):%s\n", ans6);
	printf("ft_strtrim(\"akiyama\", \"akiyama\"):%s\n", ans7);

	free(ans5);
	free(ans6);
	free(ans7);

	//split
	printf("split---------------------------------------\n");
	char	**ans8;
	int		i;
	ans8 = ft_split("111aki1yama11ryo111jiro1111", '1');
	printf("ft_split(\"111aki1yama11ryo111jiro1111\", '1'):\n");
	i = -1;
	while (ans8[++i])
	{
		printf("%s\n", ans8[i]);
		free(ans8[i]);
	}
	free(ans8);

	ans8 = ft_split("ggggggg", 'g');
	printf("ft_split(\"ggggggg\", 'g'):\n");
	i = -1;
	while (ans8[++i])
	{
		printf("%s\n", ans8[i]);
		free(ans8[i]);
	}
	free(ans8);

	ans8 = ft_split("ggggggg", 'a');
	printf("ft_split(\"ggggggg\", 'a'):\n");
	i = -1;
	while (ans8[++i])
	{
		printf("%s\n", ans8[i]);
		free(ans8[i]);
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

	//putendl_fd
	printf("putendl_fd----------------------------------\n");
	write(fd, "akiyama", ft_strlen("akiyama"));
	write(fd, "\nryojiro:\n", ft_strlen("\nryojiro:\n"));
	ft_putendl_fd("akiyama", fd);
	write(fd, "ryojiro", ft_strlen("ryojiro"));
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
