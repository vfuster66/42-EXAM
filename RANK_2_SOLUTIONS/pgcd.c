/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:48:02 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 09:53:00 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Version 1
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		printf("%d", a);
	}
	printf("\n");
	return (0);
}

//Version 2

#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
        int     a;
        int     b;
        int     temp;

        if (ac == 3)
        {
                a = atoi(av[1]);
                b = atoi(av[2]);
                while (b != 0)
                {
                        temp = b;
                        b = a % b;
                        a = temp;
                }
                printf("%d", a);
        }
        printf("\n");
        return (0);
}

//Version 3

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int	a;
	int	b;
	int	n;
	
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		n = a;
		while (n > 0)
		{
			if (a % n == 0 && b % n == 0)
			{
				printf("%d\n", n);
				return ;
			}
			n--;
		}
	}	
	printf("\n");
	return (0);
}