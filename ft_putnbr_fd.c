/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 02:58:28 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/03 03:19:23 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	n1;

	n1 = n;
	if (n1 < 0)
	{
		n1 = -n1;
		write(fd, "-", 1);
	}
	if (n1 > 9)
		ft_putnbr_fd(n1 / 10, fd);
	c = n1 % 10 + '0';
	write(fd, &c, 1);
}
