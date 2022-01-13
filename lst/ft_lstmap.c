/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:12:43 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/13 12:11:25 by rakiyama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*top;
	t_list	*new;
	t_list	*now_src;

	if (f == NULL || del == NULL || lst == NULL)
		return (lst);
	top = NULL;
	now_src = lst;
	while (now_src != NULL)
	{
		new = ft_lstnew((*f)(now_src->content));
		if (top == NULL)
			top = new;
		else
			ft_lstadd_back(&top, new);
		if (new == NULL)
		{
			ft_lstclear(&top, del);
			return (NULL);
		}
		now_src = now_src->next;
	}
	ft_lstclear(&lst, del);
	return (top);
}

void	*eg_func(void *content)
{
	return ((void *)ft_itoa(ft_strlen((char *)content)));
}
void	eg_del(void *content)
{
	content = NULL;
}
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	t_list	*l = ft_lstnew(ft_strdup(av[1]));
	t_list	*res;
	t_list	*l_tmp = l;
	int		i;

	l->next = ft_lstnew(ft_strdup(av[2]));
	l->next->next = ft_lstnew(ft_strdup(av[3]));
	printf("-----src------\n");
	i = 1;
	while (l != NULL)
	{
		printf("No%d:%s\n", i, (char *)l->content);
		printf("next:%p\n", l->next);
		++i;
		l = l->next;
	}
	printf("------res------\n");
	res = ft_lstmap(l_tmp, eg_func, eg_del);
	i = 1;
	while (res != NULL)
	{
		printf("No%d:%s\n", i, (char *)res->content);
		printf("next:%p\n", res->next);
		++i;
		res = res->next;
	}
	ft_lstclear(&res, eg_del);
	return (0);
}
