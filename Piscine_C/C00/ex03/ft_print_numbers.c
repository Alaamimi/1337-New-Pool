

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers()
{
	char tab[10];

	tab[0] = 47;
	while(tab[0]++ < 57)
	{
		ft_putchar(tab[0]);
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar(10);
	return(EXIT_SUCCESS);
}
