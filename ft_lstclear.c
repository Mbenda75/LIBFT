/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:41:20 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/27 20:56:37 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tp;

	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		tp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tp;
	}
}
