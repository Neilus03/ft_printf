/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:00:39 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/19 08:10:36 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_str(va_list args, const char *str, int *len)
{
	int	i;
	int	res;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			res = ft_formats(args, str[i + 1]);
			if (res == -1)
				return (-1);
			*len += res;
			i++;
		}
		else
		{
			res = ft_print_char(str[i]);
			if (res == -1)
				return (-1);
			(*len)++;
		}
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	if (process_str(args, str, &len) == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (len);
}
