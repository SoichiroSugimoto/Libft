/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:22:05 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/30 19:15:22 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	k;

	i = 0;
	n = 0;
	k = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (dst[k] != '\0' && k < dstsize)
		k++;
	i = k;
	while ((n + k + 1 < dstsize) && (src[n] != '\0'))
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	while (src[n] != '\0')
		n++;
	if (dstsize != k)
		dst[i] = '\0';
	return (k + n);
}
