/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:06:51 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/11 13:59:42 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
-----------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>

--------------------------------*/

#include <unistd.h>

int	main(int ac, char **av)
{
	// Index pour parcourir la chaine
	int	i = 0;

	// Verifier le nombre d'arguments exacts pour rentrer dans la boucle
	if (ac == 2)
	{
		// Tant que la chaine de caracteres n'est pas terminee
		while (av[1][i])
		{
			// transformation miroir
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				// ex : pour 'a' = 97 -> 219 - 97 = 122 = 'z'
				av[1][i] = 219 - av[1][i];
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				// ex : pour 'A' = 65 -> 155 - 65 = 90 = 'Z'
				av[1][i] = 155 - av[1][i];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
