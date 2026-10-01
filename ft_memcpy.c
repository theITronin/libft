/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:48:47 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/30 18:46:22 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;

	if (!dest && !src)
		return (NULL);
	str = (unsigned char *)src;
	str1 = (unsigned char *)dest;
	while (n > 0)
	{
		*str1 = *str;
		str++;
		str1++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = "ByeBye";

	ft_memcpy(str1, str, 4);
	for (int i = 0; i < 4; i++)
		printf("%c", str1[i]);
	return (0);
}
*/