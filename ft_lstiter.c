
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
