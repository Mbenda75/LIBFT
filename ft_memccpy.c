/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:05:06 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/26 17:43:12 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dest;
	s2 = (char*)src;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		if ((char)c == s2[i])
			return ((void *)s1) + i + 1;
		i++;
	}
	return (NULL);
}
