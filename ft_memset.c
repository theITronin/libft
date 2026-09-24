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
	char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;		
	}
	return (s);
}


#include <stdio.h>
int	main(void)
{
	unsigned char c[4] = {2, 2, 2, 2};
	ft_memset(c, 254, sizeof(c));
	for (int i = 0; i <= 3; i++)
	{
		printf("%d", c[i]);
	}
}

