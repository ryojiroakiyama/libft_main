/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:19:43 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/12 12:18:21 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*tmp_lst;

	res = 0;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		++res;
		tmp_lst = tmp_lst->next;
	}
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	t_list	*one;
	t_list	*two;
	t_list	*three;
	t_list	*put;

	three = ft_lstnew((void *)av[3]);
	two = ft_lstnew((void *)av[2]);
	one = ft_lstnew((void *)av[1]);
	printf("one:%p\n", one);
	printf("two:%p\n", two);
	printf("three:%p\n", three);
	ft_lstadd_front(&three, two);
	ft_lstadd_front(&two, one);
	printf("next of one:%p\n", one->next);
	printf("next of two:%p\n", two->next);
	printf("next of three:%p\n", three->next);
	put = one;
	while (put != NULL)
	{
		printf("----%s----\n", (char *)put->content);
		put = put->next;
	}
	printf("res:%d\n", ft_lstsize(one));
	return (0);
}
*/
