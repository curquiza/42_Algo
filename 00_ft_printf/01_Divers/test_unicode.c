#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "../libft/includes/libft.h"

int		ft_printf(char *, ...);

int		main(int ac, char **av)
{
	wchar_t		i;

	setlocale(LC_ALL, "");
	i = 0;
	if (ac != 2)
		return (0);
	while (i <= 0x10ffff)
	{
		ft_putnbr_endl(i);
		if (!ft_strcmp(av[1], "printf"))
			printf("%C", i);
		else if(!ft_strcmp(av[1], "ft_printf"))
			ft_printf("%C", i);
		fflush(stdout);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
