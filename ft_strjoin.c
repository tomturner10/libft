#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;

	rtn = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) * sizeof(char)));
	if (rtn == NULL)
		return (NULL);
	ft_strlcpy(rtn, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(rtn, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (rtn);
}
