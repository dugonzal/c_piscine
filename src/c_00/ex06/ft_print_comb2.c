/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:01:46 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/10 17:31:11 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/c_piscine.h"

void	ft_print_comb2(void)
{
	char x;
	char y;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(',');
			ft_putchar(' ');
			y++;
		}
		x++;
	}
}
