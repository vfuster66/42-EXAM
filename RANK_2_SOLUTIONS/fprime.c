/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:48:14 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 13:33:52 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Écrire un programme qui prend en paramètre un entier strictement positif, et
qui affiche sa décomposition en facteurs premiers sur la sortie standard,
suivie d'un '\n'.

Les facteurs doivent être affichés dans l'ordre croissant et séparés par des
'*', de telle sorte que l'expression affichée donne le bon résultat.

Si le nombre de paramètres est différent de 1, le programme doit afficher '\n'.

L'entrée, quand elle est passée, sera toujours un nombre valide sans caractères
parasites.

Exemple:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

-------------------------*/

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 1;
	int	number;

	if (ac == 2)
	{
		number = atoi(av[1]);
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
