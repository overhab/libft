/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasalexa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:34:03 by kasalexa          #+#    #+#             */
/*   Updated: 2020/11/08 22:28:19 by kasalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *arr;

	if (!(arr = malloc(nmemb * size)))
		return (0);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
