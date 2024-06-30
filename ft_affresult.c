void	ft_putnbr(int nb);

void	ft_affresult(int result[9][9], int size)
{
	int	cpt1;
	int	cpt2;

	cpt1 = 0;
	while (cpt1 < size - 1)
	{
		cpt2 = 0;
		while (cpt2 < size - 1)
		{
			ft_putnbr(result[cpt1][cpt2]);
			cpt2++;
		}
		cpt1++;
	}
}