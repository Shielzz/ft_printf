/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:58:04 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 16:30:56 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_var(const char *str)
{
	int	i;

	i = 0;
	if (str && str[i] == '%')
	{
		if (str[i + 1] == 'c')
			return (1);
		else if (str[i + 1] == 's')
			return (1);
		else if (str[i + 1] == 'p')
			return (1);
		else if (str[i + 1] == 'd')
			return (1);
		else if (str[i + 1] == 'i')
			return (1);
		else if (str[i + 1] == 'u')
			return (1);
		else if (str[i + 1] == 'x')
			return (1);
		else if (str[i + 1] == 'X')
			return (1);
		else if (str[i + 1] == '%')
			return (1);
	}
	return (0);
}

void	ft_put_var(const char c, va_list var)
{
	if (c == 'c')
		ft_putchar(va_arg(var, char), output);
	else if (c == 's')
		ft_pustr(va_arg(var, char *), output);
	else if (c =='p')
		ft_address(va_arg (var, unsigned long long));
	else if (c == 'd' || c =='i')
		ft_putnbr(va_arg(var, int))
	else if (c == 'u'):w
		ft_unsigned(va_arg(var, unsigned int));
	else if (c == 'x')
		ft_hexa_lower(va_arg(var, unsigned int));
	else if (c == 'X')
		ft_hexa_upper(va_arg(var, unsigned int));
	else if (c == '%')
}

int	ft_printf(const char *str, ...)
{
	va_list	var;
	int		i;

	va_start(var, str);
	i = 0;
	while (str)
	{
		if (ft_check_var(&str[i]))
		{
			i++;
			ft_put_var(str[i], var);
		}
		else
			ft_putchar(str[i], output);
		i++;
	}
	va_end(var);
	return (output);
}
