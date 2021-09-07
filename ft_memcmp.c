/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:44:13 by tturner           #+#    #+#             */
/*   Updated: 2021/09/07 10:44:13 by tturner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *) s1;
	two = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (two[i] != '\0' && one[i] != '\0' && i < n)
	{
		if (two[i] != one[i])
		{
			if (one[i] < two[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	if (one[i] == '\0' && two[i] != '\0')
		return (-1);
	if (two[i] == '\0' && one[i] != '\0')
		return (1);
	return (0);
}
