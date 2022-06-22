/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_alphabet.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo-d <ciclo-d@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:26:42 by ciclo-d           #+#    #+#             */
/*   Updated: 2022/06/22 15:52:32 by ciclo-d          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/c_piscine.h"

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		ft_putchar (x);
		x++;
	}
}