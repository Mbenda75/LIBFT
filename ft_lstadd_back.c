/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:11:27 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/27 19:22:41 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *first;

	if (alst != NULL)
	{
		first = *alst;
		if (*alst == NULL)
			*alst = new;
		else
		{
			while (first->next)
				first = first->next;
			first->next = new;
		}
	}
}
