/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 02:28:35 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/26 23:42:33 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}

/*int	main (void)
{
	printf("%i\n", ft_recursive_power(3, 8));

	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(1, 0));
}*/
