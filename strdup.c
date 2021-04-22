#include "main.h"

int main(void)
{
	//strdup
	//s == NULL -> segf
	printf("strdup----------------------------------------\n");
	char *ans3;
	ans3 = strdup("akiyama");
	printf("strdup:%s\n", ans3);
	free(ans3);
	
//	strdup(0);
/*	
	char *ans3_1;
	ans3_1 = strdup(0);
	printf("strdup:%s\n", ans3_1);
	free(ans3_1);
*/
	char *ans4;
	ans4 = ft_strdup("akiyama");
	printf("ft_strdup:%s\n", ans4);
	free(ans4);

	system("leaks a.out");
}
