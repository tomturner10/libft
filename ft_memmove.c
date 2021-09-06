#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char			*temp;
	int				count;
	unsigned char	*s;
	unsigned char	*d;

	count = n;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (count > 0)
	{
		*temp++ = *s++;
		count--;
	}
	while (n > 0)
	{
		*d++ = temp[count];
		n--;
		count++;
	}
	return (dest);
}