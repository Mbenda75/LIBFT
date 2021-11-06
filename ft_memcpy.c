/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:35:25 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/24 14:07:33 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const	void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dest;
	s2 = (char*)src;
	i = 0;
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return ((void *)s1);
}
