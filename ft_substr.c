/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:51:36 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/28 17:50:59 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return (subs = '\0');
	if (s_len <= start + (unsigned int)len)
		len = s_len - start;
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, &s[start], len);
	subs[start + len] = '\0';
	return (subs);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_substr("Hola Mundo", 2, 5));
	return (0);
}
*/
