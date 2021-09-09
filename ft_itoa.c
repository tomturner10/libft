#include "libft.h"

static int	ft_countnbr(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
		count++;
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*rtn;
	int				len;
	unsigned int	num;

	if (n == 0)
		return ("0");
	len = ft_countnbr(n);
	if (!(rtn = (char *)malloc(len * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		rtn[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (len > 0 && rtn[len - 1] != '-')
	{
		rtn[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (rtn);
}
