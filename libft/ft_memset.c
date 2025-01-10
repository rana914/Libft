#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
