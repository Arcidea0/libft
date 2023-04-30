/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <armgevor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 02:46:08 by armgevor          #+#    #+#             */
/*   Updated: 2023/04/30 03:19:48 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ban;
	t_list	*skzb;

	skzb = *lst;
	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst != NULL)
	{
		del((*lst)->content);
		ban = *lst;
		*lst = (*lst)->next;
		if (ban != skzb)
			free(ban);
	}
	skzb->next = NULL;
	free(skzb);
}
