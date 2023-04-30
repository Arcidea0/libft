/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:16:43 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/15 15:29:27 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			m;
	unsigned char	i;
	unsigned char	*str;

	m = 0;
	i = (unsigned char)c;
	str = (unsigned char *)s;
	while (m < n)
	{
		if (str[m] == i)
			return ((void *)str + m);
		m++;
	}
	return (NULL);
}
