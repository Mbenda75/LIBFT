/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:06:09 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/24 13:56:47 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*dst;
	char	*srce;

	dst = (char *)dest;
	srce = (char *)src;
	i = 0;
	j = 0;
	size = 0;
	while (dst[i])
		i++;
	while (srce[size])
		size++;
	if (n <= i)
		size = size + n;
	else
		size = size + i;
	while (srce[j] && (i + 1) < n)
	{
		dst[i++] = srce[j++];
	}
	dst[i] = '\0';
	return (size);
}
