/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:08:17 by armgevor          #+#    #+#             */
/*   Updated: 2023/01/26 17:17:16 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *ptr)
{
	int	tiv;

	tiv = 0;
	while (*ptr >= 48 && *ptr <= 57)
	{
		tiv = tiv * 10 + (*ptr - '0');
		ptr++;
	}
	return (tiv);
}

int	ft_atoi(const char *ptr)
{
	int	nshan;

	nshan = 1;
	while (*ptr == '\t' || *ptr == '\n' || *ptr == '\v'
		|| *ptr == '\f' || *ptr == ' ' || *ptr == '\r')
		ptr++;
	if ((*ptr == '+' || *ptr == '-'))
	{
		if (*(ptr + 1) < 48 || *(ptr + 1) > 57)
			return (0);
		else
		{
			if (*ptr == '+')
				ptr++;
			else
			{
				nshan = -1;
				ptr++;
			}
		}
	}
	return (nshan * check(ptr));
}
