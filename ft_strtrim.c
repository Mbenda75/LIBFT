/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:15:10 by benmoham          #+#    #+#             */
/*   Updated: 2019/11/24 13:53:19 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verif(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
		if (ft_verif(s1[i], set))
			i++;
		else
			break ;
	j = ft_strlen(s1);
	while (ft_verif(s1[j - 1], set) && j != 0 && j != i)
		j--;
	str = ft_substr(s1, i, (j - i));
	return (str);
}
