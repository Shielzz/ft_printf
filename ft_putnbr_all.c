/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:51:24 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 16:01:44 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// 1 - int base 10

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

// 2 - int base (16) Hexa - x

void	ft_hexa_lower(int nb)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
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

// 3 - int base (16) Hexa - X

void	ft_hexa_upper(int nb)
{
	char	*base_hexa;

	base_hexa = "0123456789ABCDEF";
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
		ft_hexa_upper(nb / 16);
		ft_hexa_upper(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}
