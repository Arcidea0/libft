/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 06:38:47 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/18 17:35:24 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	j = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	i = lend;
	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (lens);
	if (dstsize < lend)
		return (lens + dstsize);
	else
	{
		while (src[j] && j + lend < dstsize)
			dst[i++] = (char)src[j++];
		if (lend + j == dstsize && lend < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
	}	
	return (lend + lens);
}
