#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = 0;
	if (s != '\0' && f != '\0')
	{
		while (s[i] != '\0')
		{
			f(i, s[i]);
			i++;
		}
	}
}