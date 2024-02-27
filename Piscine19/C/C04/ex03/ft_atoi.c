/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 01:44:29 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/15 02:10:25 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	space(char *str, int *ptr_i)
{
	int	a;
	int	i;

	i = 0;
	a = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			a *= -1;
		i++;
	}
	*ptr_i = i;
	return (a);
}

int	ft_atoi(char *str)
{
	int	mut;
	int	res;
	int	i;

	res = 0;
	mut = space(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= mut;
	return (res);
}

/*int	main(void)
{
	char	*a = "---+--+1234ab567";

	printf("resultat %d", ft_atoi(a));
}*/
