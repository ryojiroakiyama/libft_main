/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:59:02 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/11 00:52:19 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list) * 1);
	if (res == NULL)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*content = av[1];
	t_list	*res = ft_lstnew((void *)content);

	printf("res->content:%s\n", (char *)res->content);
	printf("res->next:%p\n", res->next);
	return (0);
}
*/
