/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:42:46 by vfuster-          #+#    #+#             */
/*   Updated: 2023/07/13 08:46:31 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the 
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and 
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)
  
  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);

-------------------------------*/
// Version 1
unsigned int lcm(unsigned int a, unsigned int b)
{
	// Variable pour chercher le PPCM
	unsigned int	nombre;
	// Si une des valeurs est egale a 0, il n'y a pas de PPCM 
	if (a == 0 || b == 0)
		return (0);
	// Si a est plus grand que b, la valeur de nombre est a
	if (a > b)
		nombre = a;
	// Ou si b est plus grand que a, la valeur de nombre est b
	else
		nombre = b;
	// Boucle infinie car toujours vraie
	while (1)
	{
		// Si a et b sont divisibles par nombre
		if (nombre % a == 0 && nombre % b == 0)
			// nombre est le PPCM
			return (nombre);
		// nombre n'est pas le PPCM, on passe au nombre suivant
		nombre++;
	}
}

/*-------------------------------*/

// Version 2
unsigned int    pgcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return ((a * b) / pgcd(a, b));
}

/*-------------------------------*/

#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b);

int main(void)
{
	unsigned int a, b;
	unsigned int result;

	// Test case 1
	a = 12;
	b = 18;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 2
	a = 7;
	b = 13;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 3
	a = 0;
	b = 5;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	// Test case 4
	a = 16;
	b = 0;
	result = lcm(a, b);
	printf("LCM of %u and %u is %u\n", a, b, result);

	return (0);
}
