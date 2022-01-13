/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:10:25 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/11 01:04:27 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*now;

	if (f == NULL)
		return ;
	now = lst;
	while (now != NULL)
	{
		(*f)(now->content);
		now = now->next;
	}
}
