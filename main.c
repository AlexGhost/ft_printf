/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <acourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:31:08 by acourtin          #+#    #+#             */
/*   Updated: 2018/05/25 19:21:16 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			main(void)
{
	ft_printf("Test\tInt :\t%i\n", 42);
	ft_printf("Test\tChar :\t%c\n", 'g');
	ft_printf("Test\tStr :\t%s\n", "coucou");
	return (0);
}
