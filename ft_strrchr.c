/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:26:28 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/12 17:28:13 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int i_save;

	i = 0;
	i_save = -1;
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i])
	{
		if (c == s[i])
			i_save = i;
		i++;
	}
	if (i_save != -1)
	{
		return ((char *)(s + i_save));
	}
	return (0);
}
