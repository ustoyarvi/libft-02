/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:00:26 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 04:15:22 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * 0. Проверяем наличие списка.
 * 1. Если список пустой, присваиваем указателю на начало списка значение
 *  нового элемента.
 * 2. Если список непустой, то находим последний элемент и присоединяем 
 *  к нему новый.
 */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == NULL)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}