/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:04:49 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/21 02:50:31 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s1[count] != '\0')
		count++;
	if (!(p = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	while (i < count)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
