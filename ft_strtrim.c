/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 13:23:25 by sosugimo          #+#    #+#             */
/*   Updated: 2020/11/01 01:25:25 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int len;
	char *p;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!ft_strchr(set,*s1))
			break;
		s1++;
	}
	len = ft_strlen(s1);
	while (len)
	{
		if (!ft_strchr(set,s1[len - 1]))
			break;
		len--;
	}
	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(p,s1,len + 1);
	return (p);
}


// static int		len_for_trm(char const *s1, char const *set)
// {
// 	int i;
// 	int j;
// 	int k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (s1[i])
// 	{
// 		while (set[j])
// 		{
// 			if (s1[i] == set[j])
// 				k++;
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 		if (i != k || i == (int)ft_strlen(s1))
// 			return (k);
// 	}
// 	return (0);
// }

// static int		len_for_trm_r(char const *s1, char const *set)
// {
// 	int i;
// 	int j;
// 	int k;

// 	i = (int)ft_strlen(s1) - 1;
// 	j = 0;
// 	k = 0;
// 	while (k != (int)ft_strlen(s1) + 1)
// 	{
// 		while (set[j])
// 		{
// 			if (s1[i] == set[j])
// 				k++;
// 			j++;
// 		}
// 		j = 0;
// 		i--;
// 		if (k != (int)ft_strlen(s1) - 1 - i)
// 			return (k);
// 	}
// 	return (0);
// }

// char			*ft_strtrim(char const *s1, char const *set)
// {
// 	int		k;
// 	int		i;
// 	int		len;
// 	char	*p;

// 	k = 0;
// 	if (!s1 || !set)
// 		return (0);
// 	i = len_for_trm(s1, set);
// 	len = ft_strlen(s1) - (len_for_trm(s1, set) + len_for_trm_r(s1, set));
// 	if (len <= 0)
// 		len = 0;
// 	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	while (k != len)
// 	{
// 		p[k] = s1[i];
// 		k++;
// 		i++;
// 	}
// 	p[k] = '\0';
// 	return (p);
// }
