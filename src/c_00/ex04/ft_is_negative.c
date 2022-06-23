/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo-d <ciclo-d@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:13:43 by ciclo-d           #+#    #+#             */
/*   Updated: 2022/06/23 19:34:01 by ciclo-d          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/c_piscine.h"


void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	ft_putchar('P');
}

// ft_putchar((n < 0) ? 'N' : 'P'); solucion con ternario.

