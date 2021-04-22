#include "main.h"

int	main(void)
{
	//bzero
	//same memset
	printf("bzero-------------------------------------\n");
	char s2_1[] = "akiyama";
	bzero(s2_1 + 2, 3);
	printf("bzero:");
	put_honest(s2_1, 7);

	char s2_2[] = "akiyama";
	ft_bzero(s2_2 + 2, 3);
	printf("ft_bzero:");
	put_honest(s2_2, 7);
}
