/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:31:27 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/26 23:27:07 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s1;

	s1 = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			s1 = s;
		s++;
	}
	if (*s == c)
		s1 = s;
	return ((char *)s1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("Hola Mundo", 'M'));
	return (0);
}
*/