/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:53 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/01 00:37:43 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = ft_strlen(s);
	if (c == '\0')
		return (s + i);
	if (!*str)
		return (NULL);
	if (c < 0 || c > 127)
		return ((char *)str);
	while (i > 0 && s[i] != c)
		i--;
	if (i == 0 && s[0] != c)
		return (NULL);
	return (s + i);
}
