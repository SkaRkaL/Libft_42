/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:18:36 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 19:48:43 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *head,*head1,*head2;
// 	head = ft_lstnew("saad");
// 	head1 = ft_lstnew("f1ff3f");
// 	head2 = ft_lstnew("okug,");
// 	head->next = head1;
// 	head1->next = head2;
// 	ft_lstadd_front(&head,ft_lstnew("fiddler"));
// 	while(head)
// 	{
// 		printf("%s\n",head->content);
// 		head = head->next;
// 	}
// }

// // 	t_list *ptr = &head;
// // 	while (ptr)
// // 	{
// // 		printf("%s\n", ptr->content);
// // 		ptr = ptr->next;
// // 	}

// // }