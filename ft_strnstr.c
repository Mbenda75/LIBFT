/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:52:07 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/27 19:18:16 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ss1;
	char	*ss2;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (ss2[0] == '\0')
		return (ss1);
	while (ss1[i] && i < len)
	{
		j = 0;
		while (ss2[j] == ss1[i + j] && (i + j) < len)
		{
			if (ss2[j + 1] == '\0')
			{
				return (ss1 + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
