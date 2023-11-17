/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchikhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:58:49 by abchikhi          #+#    #+#             */
/*   Updated: 2023/11/09 01:59:01 by abchikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*holder;

	if (!lst)
		return (0);
	i = 0;
	holder = lst;
	while (holder != NULL)
	{
		holder = holder->next;
		i++;
	}
	return (i);
}
