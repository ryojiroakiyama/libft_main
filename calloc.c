#include "main.h"

int main(void)
{
	//calloc
	//can't think of a way to verify if calloc allocate the size or not
	printf("calloc----------------------------------------\n");
	int *ans1;
	int i = -1;
	ans1 = (int *)calloc(10, sizeof(int));
	printf("calloc");
	while (++i < 10)
		printf(":%d", ans1[i]);
	printf("\n");
	free(ans1);
/*
	char *ans1_1;
	i = -1;
	ans1_1 = (char *)calloc(0, 0);
	printf("calloc(0)\n");
	while (ans1_1[++i] == '\0')
	{
		printf("%d:%c\n", i, ans1_1[i]);
		printf("\n");
	}
	free(ans1_1);

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
}
