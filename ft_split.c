/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:54:31 by tturner           #+#    #+#             */
/*   Updated: 2021/09/07 16:54:31 by tturner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsplits(char const *s, char c)
{
	int	count;
	int len;
	int i;

	len = ft_strlen(s);
	count = 0;
	i = 0;
	while (i < len)
	{
		if (s[i] == c)
			count++;
			while (s[i] != '\0' && s[i] == c)
				i++;
		i++;
	}
	return (count);
}

