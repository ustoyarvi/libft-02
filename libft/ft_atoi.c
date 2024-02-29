/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:20:44 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/23 22:58:23 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}	

int	is_space(char c)
{
	if ((c >= 10 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	if (!str)
		return (0);
	while (is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		while (!is_numeric(str[i]))
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		if (is_numeric(str[i]) || str[i] != '\0')
		{
			result = result * 10 + (str[i] - '0');
		i++;
		}
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *a = "-465";
	int b;
	int	c;

	b = ft_atoi(a);
	c = atoi(a);
	printf("%d\n", b);
	printf("%d\n", c);
	return (0);
}*/
