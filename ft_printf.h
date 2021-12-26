/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhafsi <lhafsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:46:24 by lhafsi            #+#    #+#             */
/*   Updated: 2021/12/26 23:58:43 by lhafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int ft_print_c(char c);
int	ft_print_s(char *str);
int	ft_print_p(unsigned long long p);
int	ft_print_di(int d);
int	ft_print_unsigned(unsigned int x);
int	ft_print_lower(unsigned int x);
int	ft_print_upper(unsigned int x);
int get_size_di(int nbr);
int get_size_u(unsigned int nbr);
int get_size_xx(unsigned int nbr);
int get_size_p(unsigned long long nbr);
void	ft_putnbr(int nb);
void	ft_put_unsigned(unsigned int nb);
void	ft_hexa_lower(unsigned int nb);
void	ft_hexa_upper(unsigned int nb);
void	ft_hexa_ptr(unsigned long long nb);
int	ft_check_var(const char *str);

#endif