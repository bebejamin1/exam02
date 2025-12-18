/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:33:45 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/12/17 11:40:27 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->data = content;
	head->next = NULL;
	return (head);
}
#include <stdio.h>
int	main(void)
{
	t_list	*node = NULL;
	char *content = "BEN";
	node = ft_lstnew(content);
	content = "hugo";
	ft_lstadd_front(&node, ft_lstnew(content));
	content = "nominoe";
	ft_lstadd_front(&node, ft_lstnew(content));
	content = "fleur";
	ft_lstadd_front(&node, ft_lstnew(content));
	printf("\nNUMBER ; %d\n", ft_list_size(node));
}