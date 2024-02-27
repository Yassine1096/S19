/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:33:23 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/15 00:55:31 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <strings.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lena;
	unsigned int	lenb;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	lena = j;
	lenb = ft_strlen(src);
	if (size == 0 || size <= lena)
		return (lenb + size);
	while (src[i] != '\0' && i < size - lena - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lena + lenb);
}
/*int	main(void)
{
	char	a[] = "Bonjour";
	char	b[] = "Merurevoir";
	
	printf("Fonction %d\n", ft_strlcat(a, b, 4));
	printf("Fonction Officiel %lu \n", strlcat(a, b, 4));
	
}*/
