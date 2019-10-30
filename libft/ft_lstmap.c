/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkhay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:54:36 by abelkhay          #+#    #+#             */
/*   Updated: 2019/07/05 13:54:39 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

	if (lst)
	{
		newlist = (t_list*)malloc(sizeof(lst));
		if (!newlist)
			return (NULL);
		newlist = f(lst);
		newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (NULL);
}
