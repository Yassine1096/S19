/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <yaaouast@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:07:06 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/22 02:42:33 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char	**argv)
{
	int	j;

	j = 1;
	while (argc >= 2 && j < argc)
	{
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j++;
	}
	if (argc < 2)
		return (0);
}
