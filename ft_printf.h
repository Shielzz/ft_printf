/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:46:24 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 16:05:13 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H
# include <stdef.h>
# include <unistd.h>

void	ft_putchar(char c, int *output);
void	ft_putstr(char *str, int *output);
size_t	ft_strlen(const char *str);
void	ft_put_var(const char c, va_list var);
void	ft_putnbr(int nb);
void	ft_hexa_lower(int nb);
void	ft_hexa_upper(int nb);
void	ft_hexa_ptr(unsigned long int nb);
void	ft_address(void *ptr);
