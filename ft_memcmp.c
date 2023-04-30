/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 08:38:38 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/10 02:21:41 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			m;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	m = -1;
	while (++m < n)
		if (a[m] > b[m] || a[m] < b[m])
			return (a[m] - b[m]);
	return (0);
}
