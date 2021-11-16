/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:20:23 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/08 22:11:12 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*chr;
	int			i;

	chr = (char *)s;
	i = 0;
	while (n--)
	{
		if (chr[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
