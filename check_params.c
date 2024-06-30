#include <stdio.h>

void	ft_errparams(char bin[50]);

int check_params(int argc, char *argv[])
{
  
	int	cpt2;
	int	cpt3;
    int size;
    int cpt1;

    if (argc == 1)
    {
        ft_errparams(&argv[0][1]);
        return 0;
    }
    else if (argc > 2)
        size = *argv[2];
    else
        size = 4;

    cpt1 = 0;
    while (argv[1][cpt1])
        cpt1++;
    if (cpt1 < (size * 2 * 4) - 1)
    {
        ft_errparams(&argv[0][1]);
        return 0;
    }

    return size;
}
