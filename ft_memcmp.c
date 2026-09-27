/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 00:17:23 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/27 00:25:16 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_memcmp("ABCD", "ABDZ", 3));
	return (0);
}
*/