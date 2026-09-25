/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:53:58 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/25 18:54:07 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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