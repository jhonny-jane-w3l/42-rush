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

void	ft_initnum(int num[9], int size)
{
	while (size > 0)
		num[size--] = 0;
}

void	ft_checkuniquecol(int matrix[11][11][11], int size, int *valid)
{
	int	num[9];
	int	col;
	int	line;

	col = 1;
	while (valid && col < size + 1)
	{
		ft_initnum(num, size);
		line = 1;
		while (valid && line < size + 1)
			if (num[matrix[line][col][0]] == 1)
				valid = 0;
		else
			num[matrix[line][col][0]] = 1;
		col++;
	}
}

void	ft_checkuniqueline(int matrix[11][11][11], int size, int *valid)
{
	int	num[9];
	int	col;
	int	line;

	line = 1;
	while (valid && line < size + 1)
	{
		ft_initnum(num, size);
		col = 1;
		while (valid && col < size + 1)
			if (num[matrix[line][col][0]] == 1)
				valid = 0;
		else
			num[matrix[line][col][0]] = 1;
		line++;
	}
}
