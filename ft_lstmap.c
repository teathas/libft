#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;
	t_list	*append;

	if (!lst || !f || !del)
		return (NULL);

	res = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}	
		new_node->content = (*f)(lst->content);
		if (!res)
			res = new_node;
		else
		{
			append = ft_lstlast(res);
			append->next = new_node;
		}
		lst = lst->next;		
	}
	return (res);
}
