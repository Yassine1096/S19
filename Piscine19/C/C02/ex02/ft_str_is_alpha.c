/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 06:54:33 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/25 21:16:46 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str [i] >= 'a' 
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	*ex = "OSHIVEUVWewerguhweiugw";
	char	result = ft_str_is_alpha(ex);

	printf("%d", result);
}*/
