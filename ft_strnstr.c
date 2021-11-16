/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <kasalexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:54:07 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/11 02:12:58 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != 0 && i < len)
	{
		if (big[i] == little[k])
		{
			while (big[i + k] == little[k] && big[i + k] != 0 && i + k < len)
				k++;
			if (little[k] == 0)
				return ((char *)big + i);
		}
		i++;
		k = 0;
	}
	return (0);
}
