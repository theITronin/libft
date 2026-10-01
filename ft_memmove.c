/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:35:00 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/30 18:22:38 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *)src;
	str1 = (unsigned char *)dest;
	if (dest > src)
	{
		str = str + n -1;
		str1 = str1 + n -1;
		while (n > 0)
		{
			*str1 = *str;
			str--;
			str1--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "ByeBye";

	ft_memmove(dest, src, 5);
	for (int i = 0; i < 5; i++)
		printf("%c", dest[i]);

	return (0);
}
*/
