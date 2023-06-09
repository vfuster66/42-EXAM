/*Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
-------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$

---------------------------*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	// si le nombre d'arguments est différent de 2
	if (ac != 2) 
	{
		// on affiche un saut de ligne et on quitte le programme
		write(1, "\n", 1); 
		return (0);
	}
	i = 0;
	// pour chaque caractère de la chaîne de caractères en argument
	while (av[1][i]) 
	{
		// si le caractère est un underscore
		if (av[1][i] == '_') 
		{
			// on passe au caractère suivant
			i++;
			// on convertit le caractère en majuscule en ajoutant la différence entre la valeur ASCII de 'A' et la valeur ASCII de 'a'
			av[1][i] -= 32; 
		}
		// on affiche le caractère
		write(1, &av[1][i], 1);
		// on passe au caractère suivant
		i++; 
	}
	// on affiche un saut de ligne et on quitte le programme
	write(1, "\n", 1);
	return (0);
}
