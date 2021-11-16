/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:32:18 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/09 00:14:14 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = 0;
	if (lst && new)
	{
		tmp = *lst;
		if (!tmp)
			*lst = new;
		else
		{
			tmp = ft_lstlast(tmp);
			tmp->next = new;
		}
	}
}
