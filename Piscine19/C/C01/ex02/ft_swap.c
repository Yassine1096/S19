/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 05:32:23 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/11 22:47:18 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*int	main(void)
{
	int	deux;
	int	quatre;

	deux = 2;
	quatre = 4;
	ft_swap(&deux, &quatre);
	printf("%d \n", deux);
	printf("%d \n", quatre);
}*/
