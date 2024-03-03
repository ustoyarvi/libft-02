/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:55:26 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 03:19:17 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Функция добавляет новый элемент списка new в начало списка lst. 
 * Присваеваем полю next нового элемента указатель на голову списка lst,
 * а затем обновляем указатель на голову списка lst, чтобы он указывал на 
 * новый элемент.
 *
 *
 */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}