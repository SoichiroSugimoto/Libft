/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:29:03 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/31 21:10:12 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = len - 1;
	st1 = (unsigned char *)dst;
	st2 = (unsigned char *)src;
	if (len <= 0 || (st1 == 0 && st2 == 0))
		i = 0;
	if (dst > src && i > 0)
	{
		while (i > 0)
		{
			st1[i] = st2[i];
			i--;
		}
		st1[i] = st2[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
