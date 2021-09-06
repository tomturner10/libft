#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *) s;
	while (n > 0)
	{
		if (*src++ == c)
			return (src);
		n--;
	}
	return ((unsigned char *) '\0');
}
