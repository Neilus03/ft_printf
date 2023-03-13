/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:42:52 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/03/13 09:47:21 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_unsigned_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_unsigned_digits(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

int	ft_print_unsigned(unsigned int n)
{
	return (ft_print_str(ft_unsigned_itoa(n)));
}
