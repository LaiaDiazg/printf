// main.c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hola, %s! El número es: %d\n", "Mundo", 42);
	return (0);
}

//gcc ft_printchar.c ft_printnumber.c ft_putptr.c ft_printf.c -o a main.c
//./a
