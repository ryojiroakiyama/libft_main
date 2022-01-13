#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
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

	write(fd, "str == NULL:", ft_strlen("str == NULL:"));
	ft_putstr_fd(0, fd);
	write(fd, "\n", 1);

	//putendl_fd
	printf("putendl_fd----------------------------------\n");
	ft_putendl_fd("akiyama", fd);
	write(fd, "\n", 1);
	
	write(fd, "str == NULL:", ft_strlen("str == NULL:"));
	ft_putendl_fd(0, fd);
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
}
