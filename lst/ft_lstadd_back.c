/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaneko </var/mail/kkaneko>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:51:19 by kkaneko           #+#    #+#             */
/*   Updated: 2022/01/11 12:07:12 by kkaneko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*eol;

	if (lst == NULL || new == NULL)
		return ;
	eol = ft_lstlast(*lst);
	if (eol == NULL)
		*lst = new;
	else
		eol->next = new;
	new->next = NULL;
}
