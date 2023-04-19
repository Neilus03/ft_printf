/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:16:19 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/19 08:48:48 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_positive(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}

static char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		mod;

	mod = 0;
	len = ft_count_digits(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n)
	{
		len--;
		mod = ft_positive(n % 10);
		result[len] = mod + '0';
		n = n / 10;
	}
	return (result);
}

int	ft_print_nbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = ft_print_str(str);
	free(str);
	return (len);
}
