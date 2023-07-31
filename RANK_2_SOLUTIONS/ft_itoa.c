/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:13:21 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 14:17:17 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
-----------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

------------------------------*/

#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int		i = 0;
	long	temp = nbr;
	char	*str;

	if (nbr == -2147483648)
		return ("-2147483648");
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] ='\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
		str[0] = '-';
	}
	while (temp)
	{
		temp /= 10;
		i++;
	}
	while (nbr)
	{
		str[--i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/*-------------------------------------------
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);

int main(int ac, char **av)
{
	(void)ac;
    printf("%s\n", ft_itoa(atoi(av[1])));
    return (0);
}
-------------------------------------------*/