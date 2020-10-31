/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:26:21 by sosugimo          #+#    #+#             */
/*   Updated: 2020/11/01 03:42:16 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int				strbycnt(char const *s, char c)
{
	size_t	i;
	int		id;

	id = 0;
	if (!ft_strlen(s))
		return (0);
	if (s[0] != c)
		id++;
	i = 0;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			id++;
		i++;
	}
	return (id);
}

static char				**ft_all_free(char **p)
{
	int j;

	j = 0;
	while (p[j])
	{
		free(p[j]);
		j++;
	}
	free(p);
	return (NULL);
}

char					**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		len;

	if (!s || !(p = (char **)malloc(sizeof(char *) * (strbycnt(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		if (*s)
		{
			if (!(p[i] = (char *)malloc(sizeof(char) * (len + 1))))
				return (ft_all_free(p));
			ft_strlcpy(p[i], s, len + 1);
			s += len;
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}
