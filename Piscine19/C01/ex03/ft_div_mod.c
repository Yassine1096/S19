/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 05:43:36 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/18 22:59:56 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div = &c;
	int	*mod = &d;

	a = 9;
	b = 2;

	ft_div_mod(a, b, div, mod);
	printf("resultat de la division est egal a %d\n", c);
	printf("Le modulo est egal a %d\n", d);
}*/
