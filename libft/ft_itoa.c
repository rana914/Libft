#include "libft.h"

static int	length(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

long	negativ_nbr(char *str, long nbr)
{
	str[0] = '-';
	if (nbr == -2147483648)
		str[1] = 2;
	nbr = -nbr;
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		j;
	long	nbl;

	nbl = nbr;
	j = length(nbr);
	str = ft_calloc(j + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[j] = '\0';
	if (nbl == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbl < 0)
		nbl = negativ_nbr(str, nbl);
	while (j > 0 && nbl != 0)
	{
		str[--j] = (nbl % 10) + '0';
		nbl = nbl / 10;
	}
	return (str);
}
