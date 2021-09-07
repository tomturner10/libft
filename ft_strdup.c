/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:47:29 by tturner           #+#    #+#             */
/*   Updated: 2021/09/07 12:47:37 by tturner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s1, ft_strlen(s1) + 1);
	return (str);
}
