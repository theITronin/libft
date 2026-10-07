/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:37:40 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/06 18:12:10 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_start;
	void	*aux;

	if (!lst || !f || !del)
		return (NULL);
	n_start = NULL;
	while (lst)
	{
		aux = f(lst->content);
		n_lst = ft_lstnew(aux);
		if (!n_lst)
		{
			del(aux);
			ft_lstclear(&n_start, del);
			return (NULL);
		}
		ft_lstadd_back(&n_start, n_lst);
		lst = lst->next;
	}
	return (n_start);
}
