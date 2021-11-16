/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:45:49 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/06 15:10:41 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	d;
	size_t	e;

	i = 0;
	e = 0;
	if (!s1 || !s2)
		return (0);
	d = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc((d + 1) * sizeof(*str))))
		return (0);
	while (s1[e])
		str[i++] = s1[e++];
	e = 0;
	while (s2[e])
		str[i++] = s2[e++];
	str[i] = 0;
	return (str);
}
