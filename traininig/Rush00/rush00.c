#include "ft_putchar.c"

void	ft_printline(char char1, char char2, char char3, int size)
{
	ft_putchar(char1);
	
	int 	i;
	while(i++<size)
	{
		ft_putchar(char2);
	}

	ft_putchar(char3);
}



int	main(void)
{
	ft_printline('A','B','C',5);
}
