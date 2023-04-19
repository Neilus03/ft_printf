/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:48:00 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/19 08:29:32 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_printf.h"
#include <stdio.h> 
#include <stdlib.h>

int	main(void)
{
	char			*str;
	int				num;
	char			c;
	void			*ptr;
	unsigned int	u;

	str = "Hello, world!";
	num = 12345;
	c = 'X';
	ptr = &num;
	u = 4294967295;
	
	ft_printf ("Print a string: %s\n", str);
	ft_printf ("Print a decimal number: %d\n", num);
	ft_printf ("Print a character: %c\n", c);
	ft_printf ("Print a hexadecimal number: %x\n", num);
	ft_printf ("Print a pointer address: %p\n", ptr);
	ft_printf ("Print a percentage sign: %%\n");
	ft_printf("EDGE CASE: Print an empty string: %s\n", "");
	ft_printf("EDGE CASE: Print a negative decimal number: %d\n", -12345);
	ft_printf("EDGE CASE: Print a large decimal number: %d\n", 2147483647);
	ft_printf("EDGE CASE: Print a small decimal number: %d\n", -2147483648);
	ft_printf("EDGE CASE: Print a large hexadecimal number: %x\n", u);
	ft_printf("EDGE CASE: Print a small hexadecimal number: %x\n", 241);
	ft_printf("EDGE CASE: Print a large unsigned number: %u\n", u);
	ft_printf("EDGE CASE: Print a small unsigned number: %u\n", 324);
	ft_printf("EDGE CASE strict:\001\002\007\v\010\f\r\n");
	printf("EDGE CASE strict:\001\002\007\v\010\f\r\n");

	int ret;
	int ret1;


    ret = printf("%%%%%%");
	ret1 = ft_printf("%%%%%%");
	printf("\n\n");
    printf("Printf returned: %d\n", ret);
	ft_printf("ft_printf returned: %d\n", ret1);

}
*/