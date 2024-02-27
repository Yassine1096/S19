/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 04:31:38 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/08 06:27:46 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	dest[] = "Salut";
	char	src[] = "bye";
	char	dest1[40] = "aurevoir";
	char	src1[40] = "merci";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", src);
	printf("src est rester pareil, car c'est une copie et pas un swap");
	printf("%s", ft_strcpy(dest1,src1));
}*/
