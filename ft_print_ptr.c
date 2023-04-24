/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:32:04 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/20 12:57:42 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd, int *err)
{
	if (fd)
	{	
		if (write(fd, &c, 1) == -1)
			*err = -1;
	}
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

static void	ft_putptr(uintptr_t n, int *err)
{
	if (n >= 16)
	{	
		ft_putptr(n / 16, err);
		ft_putptr(n % 16, err);
	}
	else
	{
		if (n == 0)
		{
			if (write(1, "0", 1) == -1)
				*err = -1;
		}
		else if (n < 10)
			ft_putchar_fd((n + '0'), 1, err);
		else
			ft_putchar_fd((n - 10 + 'a'), 1, err);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	err;

	err = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	ft_putptr(ptr, &err);
	if (err == -1)
		return (err);
	return (2 + ft_len_ptr(ptr));
}
