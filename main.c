/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:48:00 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/03/13 10:49:29 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;
	int		num;
	char	c;

	str = "Hello, world!";
	num = 12345;
	c = 'X';
	ft_printf ("Print a string: %s\n", str);
	ft_printf ("Print a decimal number: %d\n", num);
	ft_printf ("Print a character: %c\n", c);
	ft_printf ("Print a hexadecimal number: %x\n", num);
	ft_printf ("Print a pointer address: %p\n", &num);
	ft_printf ("Print a percentage sign: %%\n");
	return (0);
}
