/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:48:25 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/25 17:28:46 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	c[] = "Hello";

	ft_bzero(c, 4);
	for(int	i = 0; i < 4; i++)
		printf("%d", c[i]);
	return (0);
}
*/
