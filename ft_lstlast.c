/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:16:42 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/25 21:57:26 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     t_list *head;
//     t_list *second;
//     t_list *third;
//     t_list *fourth;
//     t_list *ptr;
//     head = (t_list *)malloc(sizeof(t_list));
//     second = (t_list *)malloc(sizeof(t_list));
//     third = (t_list *)malloc(sizeof(t_list));
//     fourth = (t_list *)malloc(sizeof(t_list));
//     head->content = "one";
//     head->next = second;
//     second->content = "two";
//     second->next = third;
//     third->content = "three";
//     third->next = fourth;
//     fourth->content = "last";
//     fourth->next = NULL;

//     ptr = ft_lstlast(head);
//     printf("%s", ptr->next);
// }