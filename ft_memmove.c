#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int	i;
	int num;

	i = 0;
	num = n;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d < s)
	{
		while (i < num - 1)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = num - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
