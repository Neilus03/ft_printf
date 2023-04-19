/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:17:53 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/19 08:41:05 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexdigits(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	ft_put_hex(unsigned int n, const char format, char *str, int *index)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, format, str, index);
		ft_put_hex(n % 16, format, str, index);
	}
	else
	{
		if (n == 0)
			str[*index] = '0';
		else if (n < 10)
			str[*index] = n + '0';
		else
		{
			if (format == 'x')
				str[*index] = (n - 10) + 'a';
			else if (format == 'X')
				str[*index] = (n - 10) + 'A';
		}
		(*index)++;
	}
}

int	ft_print_hex(unsigned int n, const char format)
{
	char	*str;
	int		len;
	int		index;

	len = ft_hexdigits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
	str[len] = '\0';
	index = 0;
	ft_put_hex(n, format, str, &index);
	len = ft_print_str(str);
	free(str);
	return (len);
}
