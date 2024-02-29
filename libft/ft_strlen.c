/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:27:05 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/26 19:55:43 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *a = "qwert";
	char *b = "";

	printf("%d \n", ft_strlen(a));
	printf("%lu \n", strlen(a));
	printf("%d \n", ft_strlen(b));
	printf("%lu \n", strlen(b));
	return (0);
}
*/
