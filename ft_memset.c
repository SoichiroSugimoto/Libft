/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:40:01 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/31 21:10:00 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*st;

	st = (unsigned char *)buf;
	i = 0;
	while (i != n)
	{
		st[i] = (char)ch;
		i++;
	}
	return (buf);
}
