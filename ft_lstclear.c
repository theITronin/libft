/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:41:05 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/03 13:01:05 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*delete;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		delete = *lst;
		*lst = (*lst)->next;
		del((*lst)->content);
		free(delete);
	}
	*lst = NULL;
}
