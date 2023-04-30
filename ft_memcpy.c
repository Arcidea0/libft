/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:14:56 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/03 13:22:55 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = str;
	if (!dst && !str)
		return (NULL);
	while (n--)
		*(d++) = *(s++);
	return (dst);
}
