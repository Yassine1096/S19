/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:51:15 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/26 21:17:54 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	*cou = "Bonjour";
	char	*lu = "Bonsoir";

	printf("Copie 	 %d\n", ft_strcmp(cou, lu));
	printf("Officiel %d\n", strcmp(cou, lu));
}*/
