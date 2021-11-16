/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:36:29 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/09 00:31:07 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list *next;
	t_list *new;

	if (lst && f && del)
	{
		if (!(next = ft_lstnew(f(lst->content))))
			return (0);
		new = next;
		lst = lst->next;
		while (lst)
		{
			if (!(next = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return (0);
			}
			lst = lst->next;
			ft_lstadd_back(&new, next);
		}
		return (new);
	}
	return (0);
}
