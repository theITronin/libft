/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:37:40 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/05 18:30:17 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list 	*n_start;

	if (!lst || !f || !del)
		return (NULL);
	n_lst = NULL;
	n_start = n_lst;
	while (lst)
	{
		n_lst = (t_list *)(malloc(sizeof(t_list)));
		if (!n_lst)
			ft_lstclear(&n_start, del);
		n_lst->content = f(n_lst->content);
		n_lst->next = NULL;
		n_lst = n_lst->next;
		lst = lst->next;
	}
	return (n_start);
}
