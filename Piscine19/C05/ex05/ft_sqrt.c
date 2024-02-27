/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 02:36:05 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/26 23:43:05 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 2;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb >= 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*int	main (void)
	{
		printf("%i", ft_sqrt(16));
	}
*/
