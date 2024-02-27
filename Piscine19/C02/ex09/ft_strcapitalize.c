/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:59:51 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/22 03:37:08 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_str_lowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str[i]);
}

char	*ft_strcapitalize(char *strig)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_str_lowcase(strig);
	while (strig[i] != '\0')
	{
		if ('a' <= strig[i] && strig[i] <= 'z')
		{
			if (j == 1)
				strig[i] -= 32;
			j = 0;
		}
		else if ('0' <= strig[i] && strig[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (strig);
}
/*int	main(void)
{
	char	i[] = "salut ==+ca va bien moi ca va tres bien";

	printf("%s",(ft_strcapitalize(i)));
}*/
