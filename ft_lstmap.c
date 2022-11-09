/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:47:47 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/27 14:23:12 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!(lst && f && del))
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}

void	*f(void	*content)
{
	if (content)
	{
		strcpy(content, "Hello");
	}
	return (content);
}

void	del(void	*elem)
{
	if (elem)
	{
		elem = 0;
		free(elem);
	}
}

// int	main(void)
// {
// 	char	str1[15] = "Hello world";
// 	char	str2[15] = "42";
// 	char	str3[15] = "";
// 	char	str4[15] = "Found it!";
// 	t_list	*elem;
// 	t_list	*new_elem;

// 	elem = ft_lstnew(str1);
// 	elem->next = ft_lstnew(str2);
// 	elem->next->next = ft_lstnew(str3);
// 	elem->next->next->next = ft_lstnew(str4);
// 	new_elem = ft_lstmap(elem, f, del);
// 	if (!strcmp(new_elem->content, "Hello") \
// 		&& !strcmp(new_elem->next->content, "Hello") \
// 		&& !strcmp(new_elem->next->next->content, "Hello") \
// 		&& !strcmp(new_elem->next->next->next->content, "Hello") \
// 		&& !strcmp(elem->content, str1) \
// 		&& !strcmp(elem->next->content, str2) \
// 		&& !strcmp(elem->next->next->content, str3) \
// 		&& !strcmp(elem->next->next->next->content, str4))
// 		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
// 	else
// 		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
// 	return (0);
// }
