/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 23:46:21 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/27 00:14:18 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (*s1 != '\0' && n > 0)
	{
		if (*s1 == c)
			return (s1);
		s1++;
		n--;
	}
	if (*s1 == c)
		return (s1);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", (char *)ft_memchr("Hola Mundo", 'M', 7));
	return (0);
}
*/