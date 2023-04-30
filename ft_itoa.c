/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:39:48 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/09 00:22:41 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*zero(int n)
{
	char	*zero;
	int		i;

	i = 0;
	zero = malloc(2 * sizeof(char));
	if (!zero)
		return (NULL);
	if (n == 0)
	{
		zero[i] = '0';
		zero[++i] = '\0';
	}
	return (zero);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	long	nb;
	int		lenn;

	nb = n;
	if (nb == 0)
		return (zero(nb));
	lenn = len(n);
	nbr = malloc(sizeof(char) * (lenn + 1));
	if (!nbr)
		return (NULL);
	nbr[lenn--] = '\0';
	if (nb < 0)
	{
		nbr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		nbr[lenn] = 48 + (nb % 10);
		nb = nb / 10;
		lenn--;
	}
	return (nbr);
}
