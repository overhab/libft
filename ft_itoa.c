/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:12:55 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/08 23:59:47 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_itoalen(int n)
{
	size_t i;

	i = (n <= 0) ? 1 : 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void		ft_strrev(char *str)
{
	char	c;
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(str);
	while (i < d / 2)
	{
		c = str[i];
		str[i] = str[d - 1 - i];
		str[d - 1 - i] = c;
		i++;
	}
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			d;
	unsigned int	nbr;

	d = 0;
	nbr = (n < 0) ? (-(unsigned int)n) : (unsigned int)n;
	if (n == 0)
		return (ft_strdup("0"));
	if (!(str = malloc((ft_itoalen(n) + 1) * sizeof(*str))))
		return (0);
	while (nbr)
	{
		str[d++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (n < 0)
		str[d++] = '-';
	str[d] = 0;
	ft_strrev(str);
	return (str);
}
