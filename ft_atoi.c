/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:13:03 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/09 16:57:25 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int d;
	int k;

	k = 0;
	i = 0;
	d = 1;
	while ((nptr[i] == ' ') || (nptr[i] == '\n') || (nptr[i] == '\f')
	|| (nptr[i] == '\v') || (nptr[i] == '\r') || (nptr[i] == '\t'))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			d *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		k = k * 10 + (nptr[i] - '0');
		i++;
	}
	return (k * d);
}
