#include "main.h"

int main(void)
{
	//strncmp
	printf("strncmp----------------------------------------\n");
	printf("strncmp:%d:%d:%d:%d\n", strncmp("akiyama", "akiYama", 6), strncmp("aki", "akiyama", 20), strncmp("akiyama", "akiyama", 20), strncmp("akiYama", "akiyama", 20));
	
	printf("ft_strncmp:%d:%d:%d:%d\n", ft_strncmp("akiyama", "akiYama", 6), ft_strncmp("aki", "akiyama", 20), ft_strncmp("akiyama", "akiyama", 20), strncmp("akiYama", "akiyama", 20));
}
