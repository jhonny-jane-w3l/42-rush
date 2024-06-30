/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:50:25 by pjolidon          #+#    #+#             */
/*   Updated: 2024/06/30 02:46:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_initnum(int num[9], int size);
void	ft_checkuniquecol(int matrix[11][11][11], int size, int *valid);
void	ft_checkuniqueline(int matrix[11][11][11], int size, int *valid);

void	ft_horizondown(int matrix[11][11][11], int size, int *valid)
{
	int	nombre;
	int	vu;
	int	hauteur;
	int	col;
	int	line;

	col = 1;
	while (valid && col <= size)
	{
		nombre = matrix[0][col][0];
		vu = 0;
		hauteur = 0;
		line = 1;
		while (valid && line <= size)
		{
			if (matrix[line][col][0] > hauteur)
			{
				hauteur = matrix[line++][col][0];
				if (++vu > nombre)
					valid = 0;
			}
			line++;
		}
		col++;
	}
}

void	ft_horizonup(int matrix[11][11][11], int size, int *valid)
{
	int	nombre;
	int	vu;
	int	hauteur;
	int	line;
	int	col;

	col = size;
	while (valid && col <= size)
	{
		nombre = matrix[size + 1][col][0];
		vu = 0;
		hauteur = 0;
		line = size;
		while (valid && line > 0)
		{
			if (matrix[line][col][0] > hauteur)
			{
				hauteur = matrix[line][col][0];
				if (++vu > nombre)
					valid = 0;
			}
			line--;
		}
		col++;
	}
}

void	ft_horizonleft(int matrix[11][11][11], int size, int *valid)
{
	int	nombre;
	int	vu;
	int	hauteur;
	int	line;
	int	col;

	line = 1;
	while (valid && line <= size)
	{
		nombre = matrix[line][0][0];
		vu = 0;
		hauteur = 0;
		col = 1;
		while (valid && col <= size)
		{
			if (matrix[line][col][0] > hauteur)
			{
				hauteur = matrix[line][col][0];
				if (++vu > nombre)
					valid = 0;
			}
			col++;
		}
		line++;
	}
}

void	ft_horizonright(int matrix[11][11][11], int size, int *valid)
{
	int	nombre;
	int	vu;
	int	hauteur;
	int	col;
	int	line;

	line = 1;
	while (valid && line <= size)
	{
		nombre = matrix[line][size][0];
		vu = 0;
		hauteur = 0;
		col = size;
		while (valid && col > 0)
		{
			if (matrix[line][col][0] > hauteur)
			{
				hauteur = matrix[line][col][0];
				if (++vu > nombre)
					valid = 0;
			}
			col--;
		}
		line++;
	}
}

int	ft_verifresult(int matrix[11][11][11], int size)
{
	int	back;
	int	col;
	int	line;
	int	valid;

	valid = 1;
	ft_checkuniquecol(matrix, size, &valid);
	if (valid)
		ft_checkuniqueline(matrix, size, &valid);
	if (valid)
		ft_horizondown(matrix, size, &valid);
	if (valid)
		ft_horizonup(matrix, size, &valid);
	if (valid)
		ft_horizonleft(matrix, size, &valid);
	if (valid)
		ft_horizonright(matrix, size, &valid);
	return (valid);
}
