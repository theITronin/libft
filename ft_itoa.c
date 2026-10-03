/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:37:43 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/03 02:13:52 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_func(long n, size_t len, char *str)
{
	if (len > 0)
	{
		len--;
		str_func(n / 10, len, str);
	}
	str[len] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	n1;
	char	*str;

	n1 = n;
	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	str = malloc((len + 1 + (n1 < 0)) * sizeof(char));
	if (!str)
		return (NULL);
	if (n1 < 0)
		str[0] = '-';
	str_func(n1 * ((n1 > 0) - (n1 < 0)), len, str + (n1 < 0));
	str[len + 1] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(-0));
	return (0);
}
*/