/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:39:55 by armgevor          #+#    #+#             */
/*   Updated: 2023/01/31 15:24:51 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)str;
	if (s < d)
		while (n--)
			*(d + n) = *(s + n);
	else if (s > d)
		while (n--)
			*d++ = *s++;
	return (dest);
}
