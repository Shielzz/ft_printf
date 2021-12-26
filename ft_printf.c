/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:58:04 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 23:39:13 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_var(const char c, va_list var)
{
	if (c == 'c')
		return (ft_print_c((char)va_arg(var, int)));
	else if (c == 's')
		return (ft_print_s(va_arg(var, char *)));
	else if (c == 'p')
		return (ft_print_p(va_arg (var, unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (ft_print_di(va_arg(var, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(var, unsigned int)));
	else if (c == 'x')
		return (ft_print_lower(va_arg(var, unsigned int)));
	else if (c == 'X')
		return (ft_print_upper(va_arg(var, unsigned int)));
	else
		return (ft_print_c('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	var;
	int	i;
	int	res;
	
	va_start(var, str);
	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			res = res + ft_put_var(str[i], var);
		}
		else
		{
			ft_putchar(str[i]);
			res++;
		}
		i++;
	}
	va_end(var);
	return (res);
}