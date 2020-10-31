/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:48:40 by sosugimo          #+#    #+#             */
/*   Updated: 2020/11/01 00:23:42 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)dst;
	st2 = (unsigned char *)src;
	if (dst == src)
		return (dst);
	while (i != n)
	{
		st1[i] = st2[i];
		i++;
	}
	return (dst);
}
