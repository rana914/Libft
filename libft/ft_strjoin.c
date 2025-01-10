/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralramam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:44:41 by ralramam          #+#    #+#             */
/*   Updated: 2024/07/01 10:45:07 by ralramam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;


	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (!new_str)
		return (NULL);
	if (s1)
		ft_strcpy(new_str, (char *)s1);
	ft_strcpy(new_str +ft_strlen(s1), (char *)s2);
	return (new_str);
}
