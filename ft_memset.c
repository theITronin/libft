/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:51:32 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/24 22:03:11 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;		
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	int	c[4] = {2, 2, 2, 2};
	ft_memset(c, 255, sizeof(c));
	for (int i = 0; i <= 3; i++)
	{
		printf("%d", (unsigned char)c[i]);
	}
}
*/
