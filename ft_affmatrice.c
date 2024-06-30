void	ft_putnbr(int nb);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_affmatrice(int matrix[11][11][11], int size)
{
	
	int	cpt1;
	int	cpt2;

	cpt1 = 0;
	while (cpt1 < size + 2)
	{
		cpt2 = 0;
		while (cpt2 < size + 2 )
		{
			ft_putnbr(matrix[cpt1][cpt2][0]);
			cpt2++;
		}
		ft_putchar('\n');
		cpt1++;
	}
}