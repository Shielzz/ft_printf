/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_var.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:26:20 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 23:31:48 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_c(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_print_s(char *str)
{
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return(ft_strlen(str));
}

int	ft_print_p(unsigned long long p)
{
	write(1, "0x", 2);
	ft_hexa_ptr(p);
	return(get_size_p(p) + 2);
}

int	ft_print_di(int d)
{
	ft_putnbr(d);
	return(get_size_di(d));
}

int	ft_print_unsigned(unsigned int x)
{
	ft_put_unsigned(x);
	return(get_size_u(x));
}