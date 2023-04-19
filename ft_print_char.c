/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:19:25 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/04/19 08:32:43 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	ssize_t	ret;

	ret = write(1, &c, 1);
	if (ret == -1)
		return (-1);
	return (1);
}
/*
It checks if ret == -1 bc I was having an error when testing and trying
this at least it was partially solved
*/
