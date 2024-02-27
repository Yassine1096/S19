/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:47:11 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/26 21:22:14 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}
/*int	main(void)
{
	char	s[] = "Tconou quoi";
	char	d[] = "Tconou quoi";

	printf("Ma version : %s", ft_strstr(s, d));
	printf("Version officielle : %s", strstr(s, d));
}*/
