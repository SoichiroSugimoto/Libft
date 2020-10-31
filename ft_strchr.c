/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:10:52 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/30 19:32:21 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*st;
	int		len;

	i = 0;
	len = ft_strlen(s);
	st = (char *)s;
	while (i <= len)
	{
		if (st[i] == c)
			return (&st[i]);
		i++;
	}
	return (0);
}
