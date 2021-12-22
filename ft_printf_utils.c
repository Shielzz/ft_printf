/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:32:22 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/21 17:19:55 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int *output)
{
	*output += write (1, &c, 1);
}

void	ft_putstr(char *str, int *output)
{
	*output += write(1, str, ft_strlen(str));
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*int	ft_intsize(int n, int base_len)
{
	int	k;
	int	size;

	size = 0;
	k = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		k = -n;
		size++;
	}
	while (n > 0)
	{
		nb = nb / base_len;
		size++;
	}
	return (size);
}*/
