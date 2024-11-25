/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:46:49 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/25 10:05:23 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tamp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		tamp = lst;
		f(lst->content);
		lst = tamp->next;
	}
}
