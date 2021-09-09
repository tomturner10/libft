#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = 0;
	if (!(rtn = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}