/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <acourtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:31:08 by acourtin          #+#    #+#             */
/*   Updated: 2018/06/03 17:45:42 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int			main(void)
{
	printf("Test\tInt :\t%i\n", 42);
	ft_printf("Test\tInt :\t%i\n", 42);
	printf("Test\tChar :\t%c\n", 'g');
	ft_printf("Test\tChar :\t%c\n", 'g');
	printf("Test\tStr :\t%s\n", "coucou");
	ft_printf("Test\tStr :\t%s\n", "coucou");
	printf("helllo %% comment va?\n");
	ft_printf("helllo %% comment va?\n");
	return (0);
}
