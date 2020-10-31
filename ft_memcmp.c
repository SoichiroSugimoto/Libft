/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 01:29:18 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/28 15:06:33 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				gp;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (i != n)
	{
		if ((st1[i] - st2[i]) != 0)
		{
			gp = st1[i] - st2[i];
			return (gp);
		}
		i++;
	}
	return (0);
}
