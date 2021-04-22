#include "main.h"

int main(void)
{
	//strrchr
	printf("strrchr----------------------------------------\n");
	printf("strrchr:%s:%s:%s\n", strrchr("akiyama", '\0'), strrchr("akiyama", 'x'), strrchr("akiyama", 'a'));
	printf("ft_strrchr:%s:%s:%s\n", ft_strrchr("akiyama", '\0'), ft_strrchr("akiyama", 'x'), ft_strrchr("akiyama", 'a'));
}
