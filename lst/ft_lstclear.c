/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:02:49 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/11 00:38:19 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next;
	}
}
/*
#include <stdio.h>
void	del_content(void *content)
{
	content = NULL;
}
int	main(void)
{
	t_list	*l = ft_lstnew(ft_strdup("nyacat"));
	//t_list	*l_next = ft_lstnew("##test##");

	//l->next = l_next;
	ft_lstclear(&l, del_content);
	//free(l);
	//free(l_next);
	printf("No1 address:%p\n", l);
	//printf("No2 address:%p\n", l_next);
	return (0);
}
*/
