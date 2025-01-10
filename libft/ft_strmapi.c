#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*r;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	r = ft_calloc((len + 1), sizeof(char));
	if (!r)
		return (NULL);
	while (i < len)
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
