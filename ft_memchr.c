/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:48:12 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/31 21:18:38 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	st = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (st[i] == (unsigned char)c)
			return (&st[i]);
		i++;
	}
	return (0);
}
