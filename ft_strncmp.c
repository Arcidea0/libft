/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:48:30 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/10 02:52:43 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t		m;

	m = 0;
	if (!a && !b)
		return (0);
	while (a[m] && b[m] && m < n)
	{
		if (a[m] != b[m])
			return ((unsigned char)a[m] - (unsigned char)b[m]);
		m++;
	}
	if (m != n)
		return ((unsigned char)a[m] - (unsigned char)b[m]);
	return (0);
}
