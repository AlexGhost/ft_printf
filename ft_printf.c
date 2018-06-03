/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <acourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:41:04 by acourtin          #+#    #+#             */
/*   Updated: 2018/06/03 17:48:40 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static void		check_parameter(char c, va_list ap, int *i)
{
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char*));
	else if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == '%')
		ft_putchar('%');
	*i += 1;
}

void			ft_printf(const char *format, ...)
{
	int			i;
	va_list		ap;

	va_start(ap, format);
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
			check_parameter(format[i + 1], ap, &i);
		else
			ft_putchar(format[i]);
	}
	va_end(ap);
}
