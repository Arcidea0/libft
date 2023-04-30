/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:54:50 by armgevor          #+#    #+#             */
/*   Updated: 2023/01/30 14:19:43 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*n)
		return ((char *)h);
	i = -1;
	while (h[++i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && h[i + j] && n[j] && i + j < len)
			j++;
		if (j == ft_strlen(n) && h[i + j - 1] == n[j - 1])
			return ((char *)h + i);
	}
	return (0);
}
