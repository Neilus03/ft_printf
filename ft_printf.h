/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:36:02 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/03/13 11:00:47 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_print_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_percent(void);
int		ft_print_char(int c);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);
//int		main(void);

#endif //FT_PRINTF_H