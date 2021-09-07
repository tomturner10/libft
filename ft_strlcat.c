#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	int destlen;
	int srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);

	if (destlen >= size)
		destlen = size;
	return (destlen + srclen);
}
