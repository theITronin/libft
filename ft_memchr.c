/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 23:46:21 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/30 19:23:21 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n > 0)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
		n--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", (char *)ft_memchr("bonjourno", 'n', 2));
	return (0);
}
*/
