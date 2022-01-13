#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
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
}
