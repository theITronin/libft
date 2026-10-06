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
	t_list	*n_start;

	if (!lst || !f || !del)
		return (NULL);
	n_lst = ft_lstnew(f(lst->content));
	if (!n_lst)
		return (NULL);
	n_start = n_lst;
	lst = lst->next;
	while (lst)
	{
		n_lst->next = ft_lstnew(f(lst->content));
		if (n_lst->next == NULL)
		{
			del(n_lst->content);
			free(n_lst);
			ft_lstclear(&n_start, del);
			return (NULL);
		}
		lst = lst->next;
		n_lst = n_lst->next;
	}
	return (n_start);
}
