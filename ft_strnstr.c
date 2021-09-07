#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	l;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		l = len;
		while (needle[j] == haystack[i + j]
			&& haystack[i + j] != '\0' && l > 0)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}
