/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:42:52 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/27 14:04:04 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

// int main()
// {
// 	int	i;
//     t_list *ptr;
//     t_list *head;
	

// 	i = 0;
// 	ptr=ft_lstnew("H");
// 	head = ptr;
// 	while (i < 5)
// 	{
// 		ptr->next = ft_lstnew("k");
// 		ptr = ptr->next;
// 		i++;
// 	}
	
// 	while(head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }
