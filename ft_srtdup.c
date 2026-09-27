/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:36:18 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/27 11:43:32 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
        int             i;
        char    *dest;

        i = 0;
        dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char) + 1);
        if (dest == NULL)
                return (NULL);
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}

/*
int     main(void)
{
        char    c[20] = "Hola mundo que tal?";
        printf("%s", ft_strdup(c));
        return (0);
}
*/