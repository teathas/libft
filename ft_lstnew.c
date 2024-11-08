#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (content == NULL)
		return (NULL);
	node = (t_list*)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
