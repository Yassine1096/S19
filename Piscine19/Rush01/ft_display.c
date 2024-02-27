/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaouast <yaaouast@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:39:20 by yaaouast          #+#    #+#             */
/*   Updated: 2024/02/18 22:41:34 by yaaouast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_display(unsigned int	**tab, unsigned int	col, unsigned int	lane)
{
	int	i;

	i = 1;
	if (col <= 1 || lane <= 1)
		return ;
	while(lane >= 1)
	{
		tab[++i][0];
		if ( i == lane && i == '\0')
			ft_putchar('\n');
		return;
	}
	i = 1;
}		
int	main(int	argc, char	**argv)
{
	char	a[1][1] = "1";
	char	a[2][2] = "2";
	char	a[3][3] = "3";
	char	a[4][4] = "4";

	ft_display(2, a[1][0]);
}



