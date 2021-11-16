/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <kasalexa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:02:12 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/11 02:17:34 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t k;
	size_t r;

	i = 0;
	k = 0;
	while (dst[k] != 0 && k < size)
		k++;
	r = k;
	while (src[i] != 0 && (k + 1) < size)
	{
		dst[k] = src[i];
		k++;
		i++;
	}
	if (k < size)
		dst[k] = 0;
	return (r + ft_strlen(src));
}
