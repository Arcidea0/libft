/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:02:18 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/18 17:40:06 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *str)
{
	unsigned int	i;
	unsigned int	j;
	char			*new;

	if (!s1 || !str || !*s1)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(str, s1[i]) && s1[i])
		i++;
	while (ft_strchr(str, s1[j - 1]) && j > i)
		j--;
	new = ft_substr(s1, i, j - i);
	return (new);
}
