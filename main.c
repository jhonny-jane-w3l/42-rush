/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:50:25 by pjolidon          #+#    #+#             */
/*   Updated: 2024/06/30 18:15:29 by pjolidon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_procmatrice(int matrix[11][11][11], int result[9][9], int size);

void	ft_parseparams(int matrix[11][11][11], char parseparams[71], int size);

void	ft_affmatrice(int matrix[11][11][11], int size);

int		check_params(int argc, char *argv[]);

void	ft_affresult(int result[9][9], int size);

void	ft_errparams(char bin[50])
{
	ft_putstr("\n!!! ERROR missing parameters !!!\n\n");
	ft_putstr(bin);
	ft_putstr(" \"string of col & raw headers\" [dimension]\n");
	ft_putstr("\nString of col & raw headers\n");
	ft_putstr("---------------------------\n");
	ft_putstr("\"U1 ... U4 D1 ... D4 L1 ... L4 R1 ... R4\"\n");
	ft_putstr("Theses values are to be between double-quotes \"...\"\n");
	ft_putstr("Theses values are numbers (1-9) separated by one space\n");
	ft_putstr("or comma.'\n");
	ft_putstr("Values: (in the example, 1 to 4 as default size (4)).\n");
	ft_putstr("U1 U2 U3 U4 are the headers of the upper line.\n");
	ft_putstr("D1 D2 D3 D4 are the headers of the lower line.\n");
	ft_putstr("L1 L2 L3 L4 are the headers of the left column.\n");
	ft_putstr("R1 R2 R3 R4 are the headers of the right column.\n");
	ft_putstr("\n[dimension]\n");
	ft_putstr("-----------\n");
	ft_putstr("(integer) Optionnal square dimension. 4 by default]\n");
}

void	ft_initmatrix(int matrix[11][11][11], int size)
{
	int	cpt1;
	int	cpt2;
	int	cpt3;

	cpt1 = 0;
	while (cpt1 < size + 1)
	{
		cpt2 = 0;
		while (cpt2 < size + 1)
		{
			cpt3 = 0;
			while (cpt3 < size + 1)
			{
				matrix[cpt1][cpt2][cpt3] = 0;
				cpt3++;
			}
			cpt2++;
		}
		cpt1++;
	}
	ft_putstr("matrix initiated\n");
}

void	ft_setval(int matrix[11][11][11], int line, int col, int value)
{
	matrix[line][col][0] = value;
}

void	ft_parcharint(int *params, char parseparams[71], int size)
{
	int	cpt1;
	int	cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (cpt1 < (size * 4) - 1)
	{
		params[cpt1] = parseparams[cpt2] - 48;
		cpt1++;
		cpt2 += 2;
	}
}

int	main(int argc, char **argv)
{
	int	size;
	int	matrix[11][11][11];
	int	result[9][9];

	size = check_params(argc, argv);
	ft_initmatrix(matrix, size);
	ft_parseparams(matrix, argv[1], size);
	ft_affmatrice(matrix, size);
	ft_procmatrice(matrix, result, size);
	ft_affresult(result, size);
	return (0);
}
