/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:03:08 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/28 15:54:17 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*p;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (start <= i && j < len)
		{
			p[j] = s[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
