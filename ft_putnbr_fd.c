/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosugimo <sosugimo@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:00:44 by sosugimo          #+#    #+#             */
/*   Updated: 2020/10/28 16:04:56 by sosugimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		ch;
	long int	l;

	l = (long int)n;
	if (l < 0)
	{
		l *= -1;
		write(fd, "-", 1);
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ch = l % 10 + '0';
	write(fd, &ch, 1);
}
