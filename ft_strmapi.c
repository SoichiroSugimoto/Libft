/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 20:26:45 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/30 11:16:11 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*p;
	int					len;

	i = 0;
	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	if (!(p = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
