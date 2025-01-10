#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	start;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			count++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			result[j] = ft_calloc(i - start + 1, sizeof(char));
			if (!result[j])
			{
				while (j-- > 0)
					free (result[j]);
				free (result);
				return (NULL);
			}
			ft_strlcpy(result[j], s + start, i - start + 1);
			j++;
		}
	}
	return (result);
}
