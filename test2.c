#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_16(int nb)
{
	char	base_characters[16] = "0123456789abcdef";

	if (nb == -2147483648)
	{
		write(1, "0x80000000", 10);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 16)
	{
		ft_putnbr_16(nb / 16);
		ft_putnbr_16(nb % 16);
	}
	else
		ft_putchar(base_characters[nb]);
}

int	main()
{
	int	nb =47;
	nb--;
	printf("\nResult = \n");
	ft_putnbr_16(nb);
}
