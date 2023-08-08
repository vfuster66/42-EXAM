/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:38:53 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 09:45:27 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>

---------------------------------*/

#include <unistd.h>

// Fonction pour afficher un entier sur la sortie standard
void	ft_putnbr(int n)
{
	char	c;
	
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	// Ignorer av
	(void)av;
	// Afficher la valeur de ac moins 1
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
