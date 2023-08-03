/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:08:08 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 11:19:06 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>

------------------------------------*/

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int	main(int ac, char **av)
{
	int	nb1;
	int	nb2;
	
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		nb1 = 1;
		nb2 = ft_atoi(av[1]);
		while (nb1 <= 9)
		{
			ft_putnbr(nb1);
			write(1, " x ", 3);
			ft_putnbr(nb2);
			write(1, " = ", 3);
			ft_putnbr(nb1 * nb2);
			write(1, "\n", 1);
			nb1++;
		}
	}
	return (0);
}
