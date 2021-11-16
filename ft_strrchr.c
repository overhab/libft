/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:04:48 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/08 22:17:22 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen((const char *)s);
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return ((char*)s + i);
	}
	return (0);
}
