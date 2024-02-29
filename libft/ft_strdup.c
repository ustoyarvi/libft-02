/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:15:53 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/24 16:27:23 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *дубль строки от *s1 в новый блок памяти, выделенный с помощью malloc
 *len = измеряем длину заданной строки
 *dup_str = выделяем память размером длины строки с последним символом
 *+ 1 - добавляем символ конца строки
 *если память не удалось выделить - возвращаем нул
 *Копируем строку в новый блок памяти
 *возвращаем его.
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup_str;

	len = ft_strlen(s1) + 1;
	dup_str = (char *)malloc(sizeof(char) * len);
	if (dup_str == NULL)
		return (NULL);
	ft_memcpy(dup_str, s1, len);
	return (dup_str);
}
