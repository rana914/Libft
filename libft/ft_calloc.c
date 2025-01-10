#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char		*ptr;
	size_t				total_size;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
