#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*rana;
	size_t				i;

	i = n;
	p = (unsigned char *)dest;
	rana = (unsigned char *)src;
	if (p > rana && p < rana + n)
	{
		i = n;
		while (i > 0)
		{
			p[i - 1] = rana[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
