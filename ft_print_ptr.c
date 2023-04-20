/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:32:04 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/20 11:41:01 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write (fd, &c, 1);
}

static int	ft_len_ptr(uintptr_t n)
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

static void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{	
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n == 0)
			write(1, "0", 1);
		else if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	write(1, "0x", 2);
	ft_putptr(ptr);
	return (2 + ft_len_ptr(ptr));
}
