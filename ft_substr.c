/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:03:53 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/09 17:08:30 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	d;

	i = 0;
	d = 0;
	if (!s)
		return (0);
	else if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[d])
	{
		if (d == start && i < len)
		{
			sub[i] = s[d];
			i++;
			start++;
		}
		d++;
	}
	sub[i] = 0;
	return (sub);
}
