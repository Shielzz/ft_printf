/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:26:07 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 23:38:11 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int get_size_di(int nbr)
{
	int res;

	res = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		res++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		res++;
	}
	return (res);
}

int get_size_u(unsigned int nbr)
{
	int res;

	res = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr = nbr / 10;
		res++;
	}
	return (res);   
}

#include <stdio.h>

int get_size_xx(unsigned int nbr)
{
	int res;

	res = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr = nbr / 16;
		res++;
	}
	return (res);
}

int get_size_p(unsigned long long nbr)
{
	int res;

	res = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr = nbr / 16;
		res++;
	}
	return (res);
}