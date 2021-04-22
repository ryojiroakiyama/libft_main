#include "main.h"

int main(void)
{
	//strchr
	printf("strchr-----------------------------------------\n");
	printf("strchr:%s:%s:%s\n", strchr("akiyama", '\0'), strchr("akiyama", 'x'), strchr("akiyama", 'i'));
	printf("ft_strchr:%s:%s:%s\n", ft_strchr("akiyama", '\0'), ft_strchr("akiyama", 'x'), ft_strchr("akiyama", 'i'));
}
