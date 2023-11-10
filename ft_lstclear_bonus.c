/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:18:51 by abchikhi          #+#    #+#             */
/*   Updated: 2023/11/09 15:29:43 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*holder;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		holder = curr->next;
		ft_lstdelone(curr, del);
		curr = holder;
	}
	*lst = NULL;
}
