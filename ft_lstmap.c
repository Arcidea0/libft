/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 02:46:35 by armgevor          #+#    #+#             */
/*   Updated: 2023/02/19 15:23:19 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ban;
	t_list	*node;

	ban = (void *)00;
	if (!lst || !del || !f)
		return (00);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&ban, del);
			free(ban);
			return (NULL);
		}
		ft_lstadd_back(&ban, node);
		lst = lst->next;
	}
	return (ban);
}
