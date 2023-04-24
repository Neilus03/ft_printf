/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:18:28 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/20 12:47:50 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (write(1, &str[i], 1) == -1)
		{
			*len = -1;
			return ;
		}
		i++;
	}
}

int	ft_print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_putstr("(null)", &len);
		if (len == -1)
			return (-1);
		return (6);
	}
	while (str[len])
	{
		if (write(1, &str[len], 1) == -1)
			return (-1);
		len++;
	}
	return (len);
}
