/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 16:01:09 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 16:04:38 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// 1 - print the hexa part of the address
void	ft_hexa_ptr(unsigned long long nb)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_hexa_ptr(nb / 16);
		ft_hexa_ptr(nb % 16);
	}
	else
		ft_putchar(base_hexa[nb]);
}

//2 - print address with 0x before.
void	ft_address(void *ptr)
{
	int	i;

	i = 0;
	write (1, "0x", 2);
	ft_hexa_ptr((unsigned long int) ptr);
}
