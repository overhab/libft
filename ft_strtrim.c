/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:09:13 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/09 15:10:34 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_char(char c, char const *set)
{
	size_t r;

	r = 0;
	while (set[r])
	{
		if (set[r] == c)
			return (1);
		r++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	size_t	n;
	char	*str;

	if (!s1)
		return (0);
	end = ft_strlen(s1) - 1;
	beg = 0;
	n = 0;
	while (s1[beg] && check_char(s1[beg], set))
		beg++;
	while (end > beg && check_char(s1[end], set))
		end--;
	if (!(str = (char *)malloc(sizeof(*str) * (end - beg + 2))))
		return (0);
	while (beg < end + 1)
		str[n++] = s1[beg++];
	str[n] = '\0';
	return ((char *)str);
}
