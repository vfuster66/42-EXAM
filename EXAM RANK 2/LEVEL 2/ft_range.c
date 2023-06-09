/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
-----------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.

---------------------------*/

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	// variable qui contiendra la taille du tableau
	int	size;
	// pointeur vers le tableau alloué dynamiquement
	int	*range;
	// variable pour itérer sur le tableau
	int	i;

	// Calcul de la taille du tableau
	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	// Allocation dynamique de la mémoire pour le tableau
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	// Initialisation du tableau avec les valeurs allant de "start" à "end"
	i = 0;
	while (i < size)
	{
		if (start <= end)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
	// retourne le pointeur vers le tableau alloué dynamiquement
	return (range); 
}

/*-------------------------

#include <stdio.h>

int		*ft_range(int start, int end);

int		main(void)
{
	int		*range;
	int		i;

	range = ft_range(1, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	range = ft_range(-1, 2);
	i = 0;
	while (i < 4)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	range = ft_range(0, 0);
	printf("%d\n", range[0]);
	free(range);

	range = ft_range(0, -3);
	i = 0;
	while (i < 4)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);

	return (0);
}

----------------------------*/
