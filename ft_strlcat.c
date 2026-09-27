/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:22:01 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/26 18:00:29 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = 0;
	while (dst[i] != '\0')
		i++;
	while (src[l] != '\0')
		l++;
	if (size <= i)
		return (size + l);
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + l);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[20] = "Hola";
	printf("%zu\n", ft_strlcat(a, " Mundo!", 8));
	printf("%s\n", a);
	return (0);
}
*/
