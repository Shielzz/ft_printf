/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_var_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:26:20 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 23:33:05 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_lower(unsigned int x)
{
	ft_hexa_lower(x);
	return(get_size_xx(x));
}

int	ft_print_upper(unsigned int x)
{
	ft_hexa_upper(x);
	return(get_size_xx(x));
}