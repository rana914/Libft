#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;
	int			i;

	last_occurrence = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			last_occurrence = str + i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return ((char *)last_occurrence);
}
