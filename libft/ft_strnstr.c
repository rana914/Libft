/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralramam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:38:31 by ralramam          #+#    #+#             */
/*   Updated: 2024/06/25 13:39:49 by ralramam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!to_find[i])
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
//int	main ()
//{
//	char	str[] = " Reproduce the behavior of the function strstr ";
//	char	find[] = "of";
//	
//	printf("%s", ft_strnstr(str, find, 5));
//	return 0;
//	}
