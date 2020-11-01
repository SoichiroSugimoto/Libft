/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 13:23:25 by sosugimo          #+#    #+#             */
/*   Updated: 2020/11/01 12:36:33 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
	}
	len = ft_strlen(s1);
	while (len)
	{
		if (!ft_strchr(set, s1[len - 1]))
			break ;
		len--;
	}
	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(p, s1, len + 1);
	return (p);
}
