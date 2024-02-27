/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 03:27:44 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/11 22:44:46 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		++i;
	}
	return (i);
}
/*int	main(void)
{
	char	*fr = "Bonjour je m'appel Yassine";
	int	chall = ft_strlen(fr);

	printf("La longueur de la string est de : %d\n", chall);
	return 0;
}*/
