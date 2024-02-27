/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <yaaouast@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 03:43:49 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/27 17:42:23 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] <= '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*d;
	int		i;

	i = 0;
	d = ((dest = (char *)malloc(ft_strlen(src))));
	if (!d)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	*a = "Bonjour";

	printf("Ma fonction :%s",ft_strdup(a));
	printf("Fonction officiel : %s", strdup(a));

}*/
