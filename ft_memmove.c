#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	i = n;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d < s)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		while (i > 0)
		{
			d[i + 1] = s[i + 1];
			i--;
		}
	}
	return (dest);
}
