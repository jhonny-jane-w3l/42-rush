#include <stdio.h>
#include <unistd.h>

void	ft_parcharint(int *params, char parseparams[71], int size);
void	ft_putstr(char *str);

void	ft_setval(int matrix[11][11][11], int line, int col, int value)
{
	matrix[line][col][0] = value;
}

void	ft_parseparams(int matrix[11][11][11], char parseparams[71], int size)
{
	int	params[36];
	int	cpt1;
	int	cpt2;
	int	cpt3;

	ft_parcharint(params, parseparams, size);
	cpt1 = 0;
	cpt2 = 1;
	cpt3 = 1;
	while (cpt3 <= size * 4)
	{
		if (cpt3 <= size)
			ft_setval(matrix, 0, cpt2, params[cpt1]);
		else if (cpt3 <= size * 2)
			ft_setval(matrix, 5, cpt2 - size, params[cpt1]);
		else if (cpt3 <= size * 3)
			ft_setval(matrix, cpt2 - 2 * size, 0, params[cpt1]);
		else if (cpt3 <= size * 4)
			ft_setval(matrix, cpt2 - 3 * size, 5, params[cpt1]);
		
		cpt1++;
		cpt2++;
		cpt3++;
	}
    ft_putstr("parameters parsed\n");
}