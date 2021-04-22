#include "main.h"

int main(void)
{
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
}
