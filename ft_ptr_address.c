#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c, int *output)
{
	 *output += write (1, &c, 1);
}

void	ft_hexa_ptr(unsigned long int nb)
{
	char	base_hexa[16] = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexa_ptr(nb / 16);
		ft_hexa_ptr(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}

void	ft_address(void *ptr)
{
	int	i;

	i = 0;
	write (1, "0x", 2);
	ft_hexa_ptr((unsigned long int) ptr);
}
/*
int	main(void)
{
	int a = 0 ;

	printf("real printf : %p\n", &a);
	printf("in hexa : %lx\n", (unsigned long int)&a);
	ft_address(&a);
	return (0);
}*/
