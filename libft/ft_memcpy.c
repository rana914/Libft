#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*rana;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	rana = (unsigned char *)src;
	while (i < n)
	{
		p[i] = rana[i];
		i++;
	}
	return (dest);
}
