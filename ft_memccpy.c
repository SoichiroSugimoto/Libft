/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:10:28 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/28 15:03:54 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)dst;
	st2 = (unsigned char *)src;
	i = 0;
	while (i != n)
	{
		st1[i] = st2[i];
		if (st2[i] == (unsigned char)c)
			return (&st1[i] + 1);
		i++;
	}
	return (NULL);
}
