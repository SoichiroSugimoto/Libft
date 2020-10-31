/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 02:29:37 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/30 17:32:35 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*st1;
	char	*st2;
	char	*tmp;
	char	*tmp2;
	size_t	st2_len;

	st1 = (char *)haystack;
	st2 = (char *)needle;
	if (!*needle)
		return (st1);
	tmp2 = st2;
	st2_len = ft_strlen(st2);
	while (*st1 && st2_len++ <= len)
	{
		tmp = st1;
		while (*st2++ == *st1++)
			if (!*st2)
				return (tmp);
		st1 = tmp;
		st2 = tmp2;
		st1++;
	}
	return (NULL);
}
