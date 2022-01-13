/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:07:24 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/10 23:48:33 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*content1 = av[1];
	char	*content2 = av[2];
	t_list	*first;
	t_list	*second;

	first = ft_lstnew((void *)content1);
	second = ft_lstnew((void *)content2);
	ft_lstadd_front(&second, first);
	printf("1st:%s\n", (char *)first->content);
	printf("2nd:%s\n", (char *)first->next->content);
	return (0);
}
*/
