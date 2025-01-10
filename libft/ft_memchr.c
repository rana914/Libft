#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*r;
	unsigned char		p;
	size_t				i;

	r = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (r[i] == p)
			return ((void *)&r[i]);
		i++;
	}
	return (NULL);
}
