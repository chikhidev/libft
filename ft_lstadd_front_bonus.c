/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:53:41 by abchikhi          #+#    #+#             */
/*   Updated: 2023/11/09 15:27:28 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	t_list	*curr;

// 	if (!list || !new)
// 		return ;
// 	curr = *lst;
// 	while (curr->next)
// 		curr = curr->next;
// 	curr->next = new;
// }
