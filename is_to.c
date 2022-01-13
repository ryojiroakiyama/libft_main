#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

char	toupper_odd(unsigned int n, char c)
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
	//isalpha
	printf("isalpha----------------------------------------\n");
	printf("isalpha:%d:%d:%d\n", isalpha('d'), isalpha('+'), isalpha('H'));
	printf("ft_isalpha:%d:%d:%d\n", ft_isalpha('d'), ft_isalpha('+'), ft_isalpha('H'));

	//isdigit
	printf("isdigit----------------------------------------\n");
	printf("isdigit:%d:%d:%d\n", isdigit('4'), isdigit('+'), isdigit('H'));
	printf("ft_isdigit:%d:%d:%d\n", ft_isdigit('4'), ft_isdigit('+'), ft_isdigit('H'));
	
	//isalnum
	printf("isalnum----------------------------------------\n");
	printf("isalnum:%d:%d:%d\n", isalnum('4'), isalnum('+'), isdigit('H'));
	printf("ft_isalnum:%d:%d:%d\n", ft_isalnum('4'), ft_isalnum('+'), isdigit('H'));
	
	//isascii
	printf("isascii----------------------------------------\n");
	printf("isascii:%d:%d:%d\n", isascii('\n'), isascii(-42), isascii(128));
	printf("ft_isascii:%d:%d:%d\n", ft_isascii('\n'), ft_isascii(-42), ft_isascii(128));
//	printf("isascii:%d:%d:%d:%d\n", isascii('\n'), isascii(-42), isascii(128), isascii('ｱ'));
//	printf("ft_isascii:%d:%d:%d:%d\n", ft_isascii('\n'), ft_isascii(-42), ft_isascii(128), ft_isascii('ｱ'));

	//isprint
	printf("isprint----------------------------------------\n");
	printf("isprint:%d:%d:%d:%d\n", isprint('\0'), isprint(31), isprint(127), isprint('@'));
	printf("ft_isprint:%d:%d:%d:%d\n", ft_isprint('\0'), ft_isprint(31), ft_isprint(127), ft_isprint('@'));

	//toupper
	printf("toupper----------------------------------------\n");
	printf("toupper:%c:%c:%c:%c\n", toupper('~'), toupper('a'), toupper('H'), toupper('z'));
	printf("toupper_oddper:%c:%c:%c:%c\n", toupper_oddper('~'), toupper_oddper('a'), toupper_oddper('H'), toupper_oddper('z'));
	
	//tolower
	printf("tolower----------------------------------------\n");
	printf("tolower:%c:%c:%c:%c\n", tolower('~'), tolower('A'), tolower('h'), tolower('Z'));
	printf("ft_tolower:%c:%c:%c:%c\n", ft_tolower('~'), ft_tolower('A'), ft_tolower('h'), ft_tolower('Z'));
}
