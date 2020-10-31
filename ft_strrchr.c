/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:52:30 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/30 19:31:04 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = ft_strlen(s);
	st = (char *)s;
	while (i >= 0)
	{
		if (st[i] == c)
			return (&st[i]);
		i--;
	}
	return (0);
}
